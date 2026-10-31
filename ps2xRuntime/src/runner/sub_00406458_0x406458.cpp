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

// Function: sub_00406458
// Address: 0x406458 - 0x4065c8
void sub_00406458_0x406458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406458_0x406458");
#endif

    switch (ctx->pc) {
        case 0x406458u: goto label_406458;
        case 0x40645cu: goto label_40645c;
        case 0x406460u: goto label_406460;
        case 0x406464u: goto label_406464;
        case 0x406468u: goto label_406468;
        case 0x40646cu: goto label_40646c;
        case 0x406470u: goto label_406470;
        case 0x406474u: goto label_406474;
        case 0x406478u: goto label_406478;
        case 0x40647cu: goto label_40647c;
        case 0x406480u: goto label_406480;
        case 0x406484u: goto label_406484;
        case 0x406488u: goto label_406488;
        case 0x40648cu: goto label_40648c;
        case 0x406490u: goto label_406490;
        case 0x406494u: goto label_406494;
        case 0x406498u: goto label_406498;
        case 0x40649cu: goto label_40649c;
        case 0x4064a0u: goto label_4064a0;
        case 0x4064a4u: goto label_4064a4;
        case 0x4064a8u: goto label_4064a8;
        case 0x4064acu: goto label_4064ac;
        case 0x4064b0u: goto label_4064b0;
        case 0x4064b4u: goto label_4064b4;
        case 0x4064b8u: goto label_4064b8;
        case 0x4064bcu: goto label_4064bc;
        case 0x4064c0u: goto label_4064c0;
        case 0x4064c4u: goto label_4064c4;
        case 0x4064c8u: goto label_4064c8;
        case 0x4064ccu: goto label_4064cc;
        case 0x4064d0u: goto label_4064d0;
        case 0x4064d4u: goto label_4064d4;
        case 0x4064d8u: goto label_4064d8;
        case 0x4064dcu: goto label_4064dc;
        case 0x4064e0u: goto label_4064e0;
        case 0x4064e4u: goto label_4064e4;
        case 0x4064e8u: goto label_4064e8;
        case 0x4064ecu: goto label_4064ec;
        case 0x4064f0u: goto label_4064f0;
        case 0x4064f4u: goto label_4064f4;
        case 0x4064f8u: goto label_4064f8;
        case 0x4064fcu: goto label_4064fc;
        case 0x406500u: goto label_406500;
        case 0x406504u: goto label_406504;
        case 0x406508u: goto label_406508;
        case 0x40650cu: goto label_40650c;
        case 0x406510u: goto label_406510;
        case 0x406514u: goto label_406514;
        case 0x406518u: goto label_406518;
        case 0x40651cu: goto label_40651c;
        case 0x406520u: goto label_406520;
        case 0x406524u: goto label_406524;
        case 0x406528u: goto label_406528;
        case 0x40652cu: goto label_40652c;
        case 0x406530u: goto label_406530;
        case 0x406534u: goto label_406534;
        case 0x406538u: goto label_406538;
        case 0x40653cu: goto label_40653c;
        case 0x406540u: goto label_406540;
        case 0x406544u: goto label_406544;
        case 0x406548u: goto label_406548;
        case 0x40654cu: goto label_40654c;
        case 0x406550u: goto label_406550;
        case 0x406554u: goto label_406554;
        case 0x406558u: goto label_406558;
        case 0x40655cu: goto label_40655c;
        case 0x406560u: goto label_406560;
        case 0x406564u: goto label_406564;
        case 0x406568u: goto label_406568;
        case 0x40656cu: goto label_40656c;
        case 0x406570u: goto label_406570;
        case 0x406574u: goto label_406574;
        case 0x406578u: goto label_406578;
        case 0x40657cu: goto label_40657c;
        case 0x406580u: goto label_406580;
        case 0x406584u: goto label_406584;
        case 0x406588u: goto label_406588;
        case 0x40658cu: goto label_40658c;
        case 0x406590u: goto label_406590;
        case 0x406594u: goto label_406594;
        case 0x406598u: goto label_406598;
        case 0x40659cu: goto label_40659c;
        case 0x4065a0u: goto label_4065a0;
        case 0x4065a4u: goto label_4065a4;
        case 0x4065a8u: goto label_4065a8;
        case 0x4065acu: goto label_4065ac;
        case 0x4065b0u: goto label_4065b0;
        case 0x4065b4u: goto label_4065b4;
        case 0x4065b8u: goto label_4065b8;
        case 0x4065bcu: goto label_4065bc;
        case 0x4065c0u: goto label_4065c0;
        case 0x4065c4u: goto label_4065c4;
        default: break;
    }

    ctx->pc = 0x406458u;

label_406458:
    // 0x406458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x406458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_40645c:
    // 0x40645c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x40645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_406460:
    // 0x406460: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x406460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_406464:
    // 0x406464: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x406464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_406468:
    // 0x406468: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x406468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_40646c:
    // 0x40646c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x40646cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_406470:
    // 0x406470: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x406470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_406474:
    // 0x406474: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x406474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_406478:
    // 0x406478: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x406478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_40647c:
    // 0x40647c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x40647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_406480:
    // 0x406480: 0x40f809  jalr        $v0
label_406484:
    if (ctx->pc == 0x406484u) {
        ctx->pc = 0x406484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406480u;
        // 0x406484: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406488u;
        goto label_406488;
    }
    ctx->pc = 0x406480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x406488u);
        ctx->pc = 0x406484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406480u;
        // 0x406484: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406480u, 0x406488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406488u;
label_406488:
    // 0x406488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x406488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40648c:
    // 0x40648c: 0xc0ea14c  jal         func_3A8530
label_406490:
    if (ctx->pc == 0x406490u) {
        ctx->pc = 0x406490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40648Cu;
        // 0x406490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406494u;
        goto label_406494;
    }
    ctx->pc = 0x40648Cu;
    SET_GPR_U32(ctx, 31, 0x406494u);
    ctx->pc = 0x406490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40648Cu;
    // 0x406490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x40648Cu, 0x406494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406494u;
label_406494:
    // 0x406494: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x406494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_406498:
    // 0x406498: 0xc0ea12a  jal         func_3A84A8
label_40649c:
    if (ctx->pc == 0x40649Cu) {
        ctx->pc = 0x40649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406498u;
        // 0x40649c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4064A0u;
        goto label_4064a0;
    }
    ctx->pc = 0x406498u;
    SET_GPR_U32(ctx, 31, 0x4064A0u);
    ctx->pc = 0x40649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406498u;
    // 0x40649c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x406498u, 0x4064A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064A0u;
label_4064a0:
    // 0x4064a0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x4064a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4064a4:
    // 0x4064a4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4064a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4064a8:
    // 0x4064a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4064a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4064ac:
    // 0x4064ac: 0xc0ea12a  jal         func_3A84A8
label_4064b0:
    if (ctx->pc == 0x4064B0u) {
        ctx->pc = 0x4064B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4064ACu;
        // 0x4064b0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4064B4u;
        goto label_4064b4;
    }
    ctx->pc = 0x4064ACu;
    SET_GPR_U32(ctx, 31, 0x4064B4u);
    ctx->pc = 0x4064B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4064ACu;
    // 0x4064b0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x4064ACu, 0x4064B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064B4u;
label_4064b4:
    // 0x4064b4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x4064b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4064b8:
    // 0x4064b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x4064b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_4064bc:
    // 0x4064bc: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x4064bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
label_4064c0:
    // 0x4064c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4064c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4064c4:
    // 0x4064c4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x4064c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_4064c8:
    // 0x4064c8: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x4064c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4064cc:
    // 0x4064cc: 0xc0e858c  jal         func_3A1630
label_4064d0:
    if (ctx->pc == 0x4064D0u) {
        ctx->pc = 0x4064D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4064CCu;
        // 0x4064d0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4064D4u;
        goto label_4064d4;
    }
    ctx->pc = 0x4064CCu;
    SET_GPR_U32(ctx, 31, 0x4064D4u);
    ctx->pc = 0x4064D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4064CCu;
    // 0x4064d0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x4064CCu, 0x4064D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064D4u;
label_4064d4:
    // 0x4064d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4064d8:
    // 0x4064d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4064d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4064dc:
    // 0x4064dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4064dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4064e0:
    // 0x4064e0: 0xc0e9132  jal         func_3A44C8
label_4064e4:
    if (ctx->pc == 0x4064E4u) {
        ctx->pc = 0x4064E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4064E0u;
        // 0x4064e4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4064E8u;
        goto label_4064e8;
    }
    ctx->pc = 0x4064E0u;
    SET_GPR_U32(ctx, 31, 0x4064E8u);
    ctx->pc = 0x4064E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4064E0u;
    // 0x4064e4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x4064E0u, 0x4064E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064E8u;
label_4064e8:
    // 0x4064e8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x4064e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4064ec:
    // 0x4064ec: 0x3c08005a  lui         $t0, 0x5A
    ctx->pc = 0x4064ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)90 << 16));
label_4064f0:
    // 0x4064f0: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x4064f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4064f4:
    // 0x4064f4: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x4064f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_4064f8:
    // 0x4064f8: 0x7e430010  sq          $v1, 0x10($s2)
    ctx->pc = 0x4064f8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 3));
label_4064fc:
    // 0x4064fc: 0x3c0582f3  lui         $a1, 0x82F3
    ctx->pc = 0x4064fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33523 << 16));
label_406500:
    // 0x406500: 0x7e440020  sq          $a0, 0x20($s2)
    ctx->pc = 0x406500u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 4));
label_406504:
    // 0x406504: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x406504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406508:
    // 0x406508: 0xae4200c4  sw          $v0, 0xC4($s2)
    ctx->pc = 0x406508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
label_40650c:
    // 0x40650c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x40650cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_406510:
    // 0x406510: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x406510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_406514:
    // 0x406514: 0x34a5c684  ori         $a1, $a1, 0xC684
    ctx->pc = 0x406514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50820);
label_406518:
    // 0x406518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x406518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40651c:
    // 0x40651c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40651cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406520:
    // 0x406520: 0x8d028690  lw          $v0, -0x7970($t0)
    ctx->pc = 0x406520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294936208)));
label_406524:
    // 0x406524: 0x8d24aa84  lw          $a0, -0x557C($t1)
    ctx->pc = 0x406524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294945412)));
label_406528:
    // 0x406528: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x406528u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40652c:
    // 0x40652c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x40652cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_406530:
    // 0x406530: 0xc043f74  jal         func_10FDD0
label_406534:
    if (ctx->pc == 0x406534u) {
        ctx->pc = 0x406534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406530u;
        // 0x406534: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406538u;
        goto label_406538;
    }
    ctx->pc = 0x406530u;
    SET_GPR_U32(ctx, 31, 0x406538u);
    ctx->pc = 0x406534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406530u;
    // 0x406534: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x406530u, 0x406538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406538u;
label_406538:
    // 0x406538: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x406538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_40653c:
    // 0x40653c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x40653cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_406540:
    // 0x406540: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x406540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_406544:
    // 0x406544: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x406544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_406548:
    // 0x406548: 0xc1073cc  jal         func_41CF30
label_40654c:
    if (ctx->pc == 0x40654Cu) {
        ctx->pc = 0x40654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406548u;
        // 0x40654c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406550u;
        goto label_406550;
    }
    ctx->pc = 0x406548u;
    SET_GPR_U32(ctx, 31, 0x406550u);
    ctx->pc = 0x40654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406548u;
    // 0x40654c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x406548u, 0x406550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406550u;
label_406550:
    // 0x406550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x406550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406554:
    // 0x406554: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x406554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_406558:
    // 0x406558: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_40655c:
    if (ctx->pc == 0x40655Cu) {
        ctx->pc = 0x40655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406558u;
        // 0x40655c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406560u;
        goto label_406560;
    }
    ctx->pc = 0x406558u;
    {
        const bool branch_taken_0x406558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406558u;
        // 0x40655c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406558) {
            ctx->pc = 0x406578u;
            goto label_406578;
        }
    }
    ctx->pc = 0x406560u;
label_406560:
    // 0x406560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x406560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406564:
    // 0x406564: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x406564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_406568:
    // 0x406568: 0xc0e91f0  jal         func_3A47C0
label_40656c:
    if (ctx->pc == 0x40656Cu) {
        ctx->pc = 0x40656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406568u;
        // 0x40656c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406570u;
        goto label_406570;
    }
    ctx->pc = 0x406568u;
    SET_GPR_U32(ctx, 31, 0x406570u);
    ctx->pc = 0x40656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406568u;
    // 0x40656c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x406568u, 0x406570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406570u;
label_406570:
    // 0x406570: 0x10000006  b           . + 4 + (0x6 << 2)
label_406574:
    if (ctx->pc == 0x406574u) {
        ctx->pc = 0x406574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406570u;
        // 0x406574: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x406578u;
        goto label_406578;
    }
    ctx->pc = 0x406570u;
    {
        const bool branch_taken_0x406570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406570u;
        // 0x406574: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406570) {
            ctx->pc = 0x40658Cu;
            goto label_40658c;
        }
    }
    ctx->pc = 0x406578u;
label_406578:
    // 0x406578: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x406578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_40657c:
    // 0x40657c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406580:
    // 0x406580: 0xc0e91f0  jal         func_3A47C0
label_406584:
    if (ctx->pc == 0x406584u) {
        ctx->pc = 0x406584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406580u;
        // 0x406584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406588u;
        goto label_406588;
    }
    ctx->pc = 0x406580u;
    SET_GPR_U32(ctx, 31, 0x406588u);
    ctx->pc = 0x406584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406580u;
    // 0x406584: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x406580u, 0x406588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406588u;
label_406588:
    // 0x406588: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x406588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_40658c:
    // 0x40658c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_406590:
    if (ctx->pc == 0x406590u) {
        ctx->pc = 0x406590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40658Cu;
        // 0x406590: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406594u;
        goto label_406594;
    }
    ctx->pc = 0x40658Cu;
    {
        const bool branch_taken_0x40658c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40658Cu;
        // 0x406590: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40658c) {
            ctx->pc = 0x4065B0u;
            goto label_4065b0;
        }
    }
    ctx->pc = 0x406594u;
label_406594:
    // 0x406594: 0x8e440118  lw          $a0, 0x118($s2)
    ctx->pc = 0x406594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_406598:
    // 0x406598: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_40659c:
    if (ctx->pc == 0x40659Cu) {
        ctx->pc = 0x40659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406598u;
        // 0x40659c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4065A0u;
        goto label_4065a0;
    }
    ctx->pc = 0x406598u;
    {
        const bool branch_taken_0x406598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406598u;
        // 0x40659c: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406598) {
            ctx->pc = 0x4065B0u;
            goto label_4065b0;
        }
    }
    ctx->pc = 0x4065A0u;
label_4065a0:
    // 0x4065a0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x4065a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_4065a4:
    // 0x4065a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4065a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4065a8:
    // 0x4065a8: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x4065a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_4065ac:
    // 0x4065ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4065acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4065b0:
    // 0x4065b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4065b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4065b4:
    // 0x4065b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4065b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4065b8:
    // 0x4065b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4065b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4065bc:
    // 0x4065bc: 0x3e00008  jr          $ra
label_4065c0:
    if (ctx->pc == 0x4065C0u) {
        ctx->pc = 0x4065C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4065BCu;
        // 0x4065c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4065C4u;
        goto label_4065c4;
    }
    ctx->pc = 0x4065BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4065C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4065BCu;
        // 0x4065c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4065BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4065C4u;
label_4065c4:
    // 0x4065c4: 0x0  nop
    ctx->pc = 0x4065c4u;
    // NOP
    ctx->pc = 0x4065c8u;
}
