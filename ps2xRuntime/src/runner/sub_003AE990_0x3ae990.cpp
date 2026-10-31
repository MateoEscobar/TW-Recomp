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

// Function: sub_003AE990
// Address: 0x3ae990 - 0x3aeb70
void sub_003AE990_0x3ae990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE990_0x3ae990");
#endif

    switch (ctx->pc) {
        case 0x3ae990u: goto label_3ae990;
        case 0x3ae994u: goto label_3ae994;
        case 0x3ae998u: goto label_3ae998;
        case 0x3ae99cu: goto label_3ae99c;
        case 0x3ae9a0u: goto label_3ae9a0;
        case 0x3ae9a4u: goto label_3ae9a4;
        case 0x3ae9a8u: goto label_3ae9a8;
        case 0x3ae9acu: goto label_3ae9ac;
        case 0x3ae9b0u: goto label_3ae9b0;
        case 0x3ae9b4u: goto label_3ae9b4;
        case 0x3ae9b8u: goto label_3ae9b8;
        case 0x3ae9bcu: goto label_3ae9bc;
        case 0x3ae9c0u: goto label_3ae9c0;
        case 0x3ae9c4u: goto label_3ae9c4;
        case 0x3ae9c8u: goto label_3ae9c8;
        case 0x3ae9ccu: goto label_3ae9cc;
        case 0x3ae9d0u: goto label_3ae9d0;
        case 0x3ae9d4u: goto label_3ae9d4;
        case 0x3ae9d8u: goto label_3ae9d8;
        case 0x3ae9dcu: goto label_3ae9dc;
        case 0x3ae9e0u: goto label_3ae9e0;
        case 0x3ae9e4u: goto label_3ae9e4;
        case 0x3ae9e8u: goto label_3ae9e8;
        case 0x3ae9ecu: goto label_3ae9ec;
        case 0x3ae9f0u: goto label_3ae9f0;
        case 0x3ae9f4u: goto label_3ae9f4;
        case 0x3ae9f8u: goto label_3ae9f8;
        case 0x3ae9fcu: goto label_3ae9fc;
        case 0x3aea00u: goto label_3aea00;
        case 0x3aea04u: goto label_3aea04;
        case 0x3aea08u: goto label_3aea08;
        case 0x3aea0cu: goto label_3aea0c;
        case 0x3aea10u: goto label_3aea10;
        case 0x3aea14u: goto label_3aea14;
        case 0x3aea18u: goto label_3aea18;
        case 0x3aea1cu: goto label_3aea1c;
        case 0x3aea20u: goto label_3aea20;
        case 0x3aea24u: goto label_3aea24;
        case 0x3aea28u: goto label_3aea28;
        case 0x3aea2cu: goto label_3aea2c;
        case 0x3aea30u: goto label_3aea30;
        case 0x3aea34u: goto label_3aea34;
        case 0x3aea38u: goto label_3aea38;
        case 0x3aea3cu: goto label_3aea3c;
        case 0x3aea40u: goto label_3aea40;
        case 0x3aea44u: goto label_3aea44;
        case 0x3aea48u: goto label_3aea48;
        case 0x3aea4cu: goto label_3aea4c;
        case 0x3aea50u: goto label_3aea50;
        case 0x3aea54u: goto label_3aea54;
        case 0x3aea58u: goto label_3aea58;
        case 0x3aea5cu: goto label_3aea5c;
        case 0x3aea60u: goto label_3aea60;
        case 0x3aea64u: goto label_3aea64;
        case 0x3aea68u: goto label_3aea68;
        case 0x3aea6cu: goto label_3aea6c;
        case 0x3aea70u: goto label_3aea70;
        case 0x3aea74u: goto label_3aea74;
        case 0x3aea78u: goto label_3aea78;
        case 0x3aea7cu: goto label_3aea7c;
        case 0x3aea80u: goto label_3aea80;
        case 0x3aea84u: goto label_3aea84;
        case 0x3aea88u: goto label_3aea88;
        case 0x3aea8cu: goto label_3aea8c;
        case 0x3aea90u: goto label_3aea90;
        case 0x3aea94u: goto label_3aea94;
        case 0x3aea98u: goto label_3aea98;
        case 0x3aea9cu: goto label_3aea9c;
        case 0x3aeaa0u: goto label_3aeaa0;
        case 0x3aeaa4u: goto label_3aeaa4;
        case 0x3aeaa8u: goto label_3aeaa8;
        case 0x3aeaacu: goto label_3aeaac;
        case 0x3aeab0u: goto label_3aeab0;
        case 0x3aeab4u: goto label_3aeab4;
        case 0x3aeab8u: goto label_3aeab8;
        case 0x3aeabcu: goto label_3aeabc;
        case 0x3aeac0u: goto label_3aeac0;
        case 0x3aeac4u: goto label_3aeac4;
        case 0x3aeac8u: goto label_3aeac8;
        case 0x3aeaccu: goto label_3aeacc;
        case 0x3aead0u: goto label_3aead0;
        case 0x3aead4u: goto label_3aead4;
        case 0x3aead8u: goto label_3aead8;
        case 0x3aeadcu: goto label_3aeadc;
        case 0x3aeae0u: goto label_3aeae0;
        case 0x3aeae4u: goto label_3aeae4;
        case 0x3aeae8u: goto label_3aeae8;
        case 0x3aeaecu: goto label_3aeaec;
        case 0x3aeaf0u: goto label_3aeaf0;
        case 0x3aeaf4u: goto label_3aeaf4;
        case 0x3aeaf8u: goto label_3aeaf8;
        case 0x3aeafcu: goto label_3aeafc;
        case 0x3aeb00u: goto label_3aeb00;
        case 0x3aeb04u: goto label_3aeb04;
        case 0x3aeb08u: goto label_3aeb08;
        case 0x3aeb0cu: goto label_3aeb0c;
        case 0x3aeb10u: goto label_3aeb10;
        case 0x3aeb14u: goto label_3aeb14;
        case 0x3aeb18u: goto label_3aeb18;
        case 0x3aeb1cu: goto label_3aeb1c;
        case 0x3aeb20u: goto label_3aeb20;
        case 0x3aeb24u: goto label_3aeb24;
        case 0x3aeb28u: goto label_3aeb28;
        case 0x3aeb2cu: goto label_3aeb2c;
        case 0x3aeb30u: goto label_3aeb30;
        case 0x3aeb34u: goto label_3aeb34;
        case 0x3aeb38u: goto label_3aeb38;
        case 0x3aeb3cu: goto label_3aeb3c;
        case 0x3aeb40u: goto label_3aeb40;
        case 0x3aeb44u: goto label_3aeb44;
        case 0x3aeb48u: goto label_3aeb48;
        case 0x3aeb4cu: goto label_3aeb4c;
        case 0x3aeb50u: goto label_3aeb50;
        case 0x3aeb54u: goto label_3aeb54;
        case 0x3aeb58u: goto label_3aeb58;
        case 0x3aeb5cu: goto label_3aeb5c;
        case 0x3aeb60u: goto label_3aeb60;
        case 0x3aeb64u: goto label_3aeb64;
        case 0x3aeb68u: goto label_3aeb68;
        case 0x3aeb6cu: goto label_3aeb6c;
        default: break;
    }

    ctx->pc = 0x3ae990u;

label_3ae990:
    // 0x3ae990: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3ae990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3ae994:
    // 0x3ae994: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3ae994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3ae998:
    // 0x3ae998: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3ae998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3ae99c:
    // 0x3ae99c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ae99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ae9a0:
    // 0x3ae9a0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3ae9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3ae9a4:
    // 0x3ae9a4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3ae9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3ae9a8:
    // 0x3ae9a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ae9a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae9ac:
    // 0x3ae9ac: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3ae9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3ae9b0:
    // 0x3ae9b0: 0x3c137a00  lui         $s3, 0x7A00
    ctx->pc = 0x3ae9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31232 << 16));
label_3ae9b4:
    // 0x3ae9b4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3ae9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3ae9b8:
    // 0x3ae9b8: 0x367315ff  ori         $s3, $s3, 0x15FF
    ctx->pc = 0x3ae9b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)5631);
label_3ae9bc:
    // 0x3ae9bc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3ae9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3ae9c0:
    // 0x3ae9c0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ae9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3ae9c4:
    // 0x3ae9c4: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3ae9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3ae9c8:
    // 0x3ae9c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ae9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ae9cc:
    // 0x3ae9cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ae9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3ae9d0:
    // 0x3ae9d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3ae9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ae9d4:
    // 0x3ae9d4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ae9d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ae9d8:
    // 0x3ae9d8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ae9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ae9dc:
    // 0x3ae9dc: 0x40f809  jalr        $v0
label_3ae9e0:
    if (ctx->pc == 0x3AE9E0u) {
        ctx->pc = 0x3AE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9DCu;
        // 0x3ae9e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9E4u;
        goto label_3ae9e4;
    }
    ctx->pc = 0x3AE9DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AE9E4u);
        ctx->pc = 0x3AE9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9DCu;
        // 0x3ae9e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE9DCu, 0x3AE9E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AE9E4u;
label_3ae9e4:
    // 0x3ae9e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ae9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ae9e8:
    // 0x3ae9e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ae9e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ae9ec:
    // 0x3ae9ec: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3ae9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3ae9f0:
    // 0x3ae9f0: 0xc1073cc  jal         func_41CF30
label_3ae9f4:
    if (ctx->pc == 0x3AE9F4u) {
        ctx->pc = 0x3AE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9F0u;
        // 0x3ae9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9F8u;
        goto label_3ae9f8;
    }
    ctx->pc = 0x3AE9F0u;
    SET_GPR_U32(ctx, 31, 0x3AE9F8u);
    ctx->pc = 0x3AE9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE9F0u;
    // 0x3ae9f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3AE9F0u, 0x3AE9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9F8u;
label_3ae9f8:
    // 0x3ae9f8: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x3ae9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
label_3ae9fc:
    // 0x3ae9fc: 0x3c0355c9  lui         $v1, 0x55C9
    ctx->pc = 0x3ae9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21961 << 16));
label_3aea00:
    // 0x3aea00: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x3aea00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
label_3aea04:
    // 0x3aea04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3aea04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3aea08:
    // 0x3aea08: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3aea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_3aea0c:
    // 0x3aea0c: 0xae440054  sw          $a0, 0x54($s2)
    ctx->pc = 0x3aea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
label_3aea10:
    // 0x3aea10: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x3aea10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3aea14:
    // 0x3aea14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aea18:
    // 0x3aea18: 0xc0e858c  jal         func_3A1630
label_3aea1c:
    if (ctx->pc == 0x3AEA1Cu) {
        ctx->pc = 0x3AEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA18u;
        // 0x3aea1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA20u;
        goto label_3aea20;
    }
    ctx->pc = 0x3AEA18u;
    SET_GPR_U32(ctx, 31, 0x3AEA20u);
    ctx->pc = 0x3AEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA18u;
    // 0x3aea1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AEA18u, 0x3AEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA20u;
label_3aea20:
    // 0x3aea20: 0x366200ff  ori         $v0, $s3, 0xFF
    ctx->pc = 0x3aea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)255);
label_3aea24:
    // 0x3aea24: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x3aea24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_3aea28:
    // 0x3aea28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aea28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aea2c:
    // 0x3aea2c: 0xc0ea146  jal         func_3A8518
label_3aea30:
    if (ctx->pc == 0x3AEA30u) {
        ctx->pc = 0x3AEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA2Cu;
        // 0x3aea30: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA34u;
        goto label_3aea34;
    }
    ctx->pc = 0x3AEA2Cu;
    SET_GPR_U32(ctx, 31, 0x3AEA34u);
    ctx->pc = 0x3AEA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA2Cu;
    // 0x3aea30: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AEA2Cu, 0x3AEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA34u;
label_3aea34:
    // 0x3aea34: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3aea34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aea38:
    // 0x3aea38: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aea38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aea3c:
    // 0x3aea3c: 0xc0ea12a  jal         func_3A84A8
label_3aea40:
    if (ctx->pc == 0x3AEA40u) {
        ctx->pc = 0x3AEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA3Cu;
        // 0x3aea40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA44u;
        goto label_3aea44;
    }
    ctx->pc = 0x3AEA3Cu;
    SET_GPR_U32(ctx, 31, 0x3AEA44u);
    ctx->pc = 0x3AEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA3Cu;
    // 0x3aea40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AEA3Cu, 0x3AEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA44u;
label_3aea44:
    // 0x3aea44: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aea44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aea48:
    // 0x3aea48: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aea4c:
    // 0x3aea4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aea50:
    // 0x3aea50: 0xc0ea12a  jal         func_3A84A8
label_3aea54:
    if (ctx->pc == 0x3AEA54u) {
        ctx->pc = 0x3AEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA50u;
        // 0x3aea54: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA58u;
        goto label_3aea58;
    }
    ctx->pc = 0x3AEA50u;
    SET_GPR_U32(ctx, 31, 0x3AEA58u);
    ctx->pc = 0x3AEA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA50u;
    // 0x3aea54: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AEA50u, 0x3AEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA58u;
label_3aea58:
    // 0x3aea58: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aea58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aea5c:
    // 0x3aea5c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3aea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3aea60:
    // 0x3aea60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3aea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3aea64:
    // 0x3aea64: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3aea64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3aea68:
    // 0x3aea68: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x3aea68u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_3aea6c:
    // 0x3aea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aea70:
    // 0x3aea70: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3aea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3aea74:
    // 0x3aea74: 0x24750070  addiu       $s5, $v1, 0x70
    ctx->pc = 0x3aea74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3aea78:
    // 0x3aea78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3aea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3aea7c:
    // 0x3aea7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aea7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aea80:
    // 0x3aea80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3aea80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3aea84:
    // 0x3aea84: 0x84710070  lh          $s1, 0x70($v1)
    ctx->pc = 0x3aea84u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3aea88:
    // 0x3aea88: 0xc0cd518  jal         func_335460
label_3aea8c:
    if (ctx->pc == 0x3AEA8Cu) {
        ctx->pc = 0x3AEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA88u;
        // 0x3aea8c: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA90u;
        goto label_3aea90;
    }
    ctx->pc = 0x3AEA88u;
    SET_GPR_U32(ctx, 31, 0x3AEA90u);
    ctx->pc = 0x3AEA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA88u;
    // 0x3aea8c: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AEA88u, 0x3AEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA90u;
label_3aea90:
    // 0x3aea90: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3aea90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aea94:
    // 0x3aea94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aea94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aea98:
    // 0x3aea98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3aea98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3aea9c:
    // 0x3aea9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aea9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aeaa0:
    // 0x3aeaa0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aeaa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aeaa4:
    // 0x3aeaa4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3aeaa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3aeaa8:
    // 0x3aeaa8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3aeaa8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3aeaac:
    // 0x3aeaac: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3aeaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3aeab0:
    // 0x3aeab0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3aeab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3aeab4:
    // 0x3aeab4: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3aeab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3aeab8:
    // 0x3aeab8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aeab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aeabc:
    // 0x3aeabc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3aeabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3aeac0:
    // 0x3aeac0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3aeac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3aeac4:
    // 0x3aeac4: 0xc0cd518  jal         func_335460
label_3aeac8:
    if (ctx->pc == 0x3AEAC8u) {
        ctx->pc = 0x3AEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAC4u;
        // 0x3aeac8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEACCu;
        goto label_3aeacc;
    }
    ctx->pc = 0x3AEAC4u;
    SET_GPR_U32(ctx, 31, 0x3AEACCu);
    ctx->pc = 0x3AEAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAC4u;
    // 0x3aeac8: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AEAC4u, 0x3AEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEACCu;
label_3aeacc:
    // 0x3aeacc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3aeaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3aead0:
    // 0x3aead0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3aead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aead4:
    // 0x3aead4: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x3aead4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3aead8:
    // 0x3aead8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3aead8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aeadc:
    // 0x3aeadc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3aeadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_3aeae0:
    // 0x3aeae0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3aeae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3aeae4:
    // 0x3aeae4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3aeae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3aeae8:
    // 0x3aeae8: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3aeae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3aeaec:
    // 0x3aeaec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3aeaecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aeaf0:
    // 0x3aeaf0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3aeaf0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aeaf4:
    // 0x3aeaf4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3aeaf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aeaf8:
    // 0x3aeaf8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3aeaf8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3aeafc:
    // 0x3aeafc: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3aeafcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3aeb00:
    // 0x3aeb00: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3aeb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3aeb04:
    // 0x3aeb04: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3aeb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3aeb08:
    // 0x3aeb08: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3aeb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3aeb0c:
    // 0x3aeb0c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3aeb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3aeb10:
    // 0x3aeb10: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x3aeb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3aeb14:
    // 0x3aeb14: 0x60f809  jalr        $v1
label_3aeb18:
    if (ctx->pc == 0x3AEB18u) {
        ctx->pc = 0x3AEB1Cu;
        goto label_3aeb1c;
    }
    ctx->pc = 0x3AEB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AEB1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEB14u, 0x3AEB1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEB1Cu;
label_3aeb1c:
    // 0x3aeb1c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3aeb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3aeb20:
    // 0x3aeb20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aeb20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aeb24:
    // 0x3aeb24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aeb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aeb28:
    // 0x3aeb28: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3aeb28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3aeb2c:
    // 0x3aeb2c: 0xae5300b4  sw          $s3, 0xB4($s2)
    ctx->pc = 0x3aeb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 19));
label_3aeb30:
    // 0x3aeb30: 0xe64000c0  swc1        $f0, 0xC0($s2)
    ctx->pc = 0x3aeb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 192), bits); }
label_3aeb34:
    // 0x3aeb34: 0xae960014  sw          $s6, 0x14($s4)
    ctx->pc = 0x3aeb34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 22));
label_3aeb38:
    // 0x3aeb38: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x3aeb38u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_3aeb3c:
    // 0x3aeb3c: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x3aeb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_3aeb40:
    // 0x3aeb40: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3aeb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3aeb44:
    // 0x3aeb44: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3aeb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3aeb48:
    // 0x3aeb48: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3aeb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3aeb4c:
    // 0x3aeb4c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3aeb4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3aeb50:
    // 0x3aeb50: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3aeb50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3aeb54:
    // 0x3aeb54: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3aeb54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3aeb58:
    // 0x3aeb58: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3aeb58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3aeb5c:
    // 0x3aeb5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3aeb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3aeb60:
    // 0x3aeb60: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3aeb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3aeb64:
    // 0x3aeb64: 0x3e00008  jr          $ra
label_3aeb68:
    if (ctx->pc == 0x3AEB68u) {
        ctx->pc = 0x3AEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB64u;
        // 0x3aeb68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB6Cu;
        goto label_3aeb6c;
    }
    ctx->pc = 0x3AEB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB64u;
        // 0x3aeb68: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEB6Cu;
label_3aeb6c:
    // 0x3aeb6c: 0x0  nop
    ctx->pc = 0x3aeb6cu;
    // NOP
    ctx->pc = 0x3aeb70u;
}
