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

// Function: sub_003A9090
// Address: 0x3a9090 - 0x3a9268
void sub_003A9090_0x3a9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9090_0x3a9090");
#endif

    switch (ctx->pc) {
        case 0x3a9090u: goto label_3a9090;
        case 0x3a9094u: goto label_3a9094;
        case 0x3a9098u: goto label_3a9098;
        case 0x3a909cu: goto label_3a909c;
        case 0x3a90a0u: goto label_3a90a0;
        case 0x3a90a4u: goto label_3a90a4;
        case 0x3a90a8u: goto label_3a90a8;
        case 0x3a90acu: goto label_3a90ac;
        case 0x3a90b0u: goto label_3a90b0;
        case 0x3a90b4u: goto label_3a90b4;
        case 0x3a90b8u: goto label_3a90b8;
        case 0x3a90bcu: goto label_3a90bc;
        case 0x3a90c0u: goto label_3a90c0;
        case 0x3a90c4u: goto label_3a90c4;
        case 0x3a90c8u: goto label_3a90c8;
        case 0x3a90ccu: goto label_3a90cc;
        case 0x3a90d0u: goto label_3a90d0;
        case 0x3a90d4u: goto label_3a90d4;
        case 0x3a90d8u: goto label_3a90d8;
        case 0x3a90dcu: goto label_3a90dc;
        case 0x3a90e0u: goto label_3a90e0;
        case 0x3a90e4u: goto label_3a90e4;
        case 0x3a90e8u: goto label_3a90e8;
        case 0x3a90ecu: goto label_3a90ec;
        case 0x3a90f0u: goto label_3a90f0;
        case 0x3a90f4u: goto label_3a90f4;
        case 0x3a90f8u: goto label_3a90f8;
        case 0x3a90fcu: goto label_3a90fc;
        case 0x3a9100u: goto label_3a9100;
        case 0x3a9104u: goto label_3a9104;
        case 0x3a9108u: goto label_3a9108;
        case 0x3a910cu: goto label_3a910c;
        case 0x3a9110u: goto label_3a9110;
        case 0x3a9114u: goto label_3a9114;
        case 0x3a9118u: goto label_3a9118;
        case 0x3a911cu: goto label_3a911c;
        case 0x3a9120u: goto label_3a9120;
        case 0x3a9124u: goto label_3a9124;
        case 0x3a9128u: goto label_3a9128;
        case 0x3a912cu: goto label_3a912c;
        case 0x3a9130u: goto label_3a9130;
        case 0x3a9134u: goto label_3a9134;
        case 0x3a9138u: goto label_3a9138;
        case 0x3a913cu: goto label_3a913c;
        case 0x3a9140u: goto label_3a9140;
        case 0x3a9144u: goto label_3a9144;
        case 0x3a9148u: goto label_3a9148;
        case 0x3a914cu: goto label_3a914c;
        case 0x3a9150u: goto label_3a9150;
        case 0x3a9154u: goto label_3a9154;
        case 0x3a9158u: goto label_3a9158;
        case 0x3a915cu: goto label_3a915c;
        case 0x3a9160u: goto label_3a9160;
        case 0x3a9164u: goto label_3a9164;
        case 0x3a9168u: goto label_3a9168;
        case 0x3a916cu: goto label_3a916c;
        case 0x3a9170u: goto label_3a9170;
        case 0x3a9174u: goto label_3a9174;
        case 0x3a9178u: goto label_3a9178;
        case 0x3a917cu: goto label_3a917c;
        case 0x3a9180u: goto label_3a9180;
        case 0x3a9184u: goto label_3a9184;
        case 0x3a9188u: goto label_3a9188;
        case 0x3a918cu: goto label_3a918c;
        case 0x3a9190u: goto label_3a9190;
        case 0x3a9194u: goto label_3a9194;
        case 0x3a9198u: goto label_3a9198;
        case 0x3a919cu: goto label_3a919c;
        case 0x3a91a0u: goto label_3a91a0;
        case 0x3a91a4u: goto label_3a91a4;
        case 0x3a91a8u: goto label_3a91a8;
        case 0x3a91acu: goto label_3a91ac;
        case 0x3a91b0u: goto label_3a91b0;
        case 0x3a91b4u: goto label_3a91b4;
        case 0x3a91b8u: goto label_3a91b8;
        case 0x3a91bcu: goto label_3a91bc;
        case 0x3a91c0u: goto label_3a91c0;
        case 0x3a91c4u: goto label_3a91c4;
        case 0x3a91c8u: goto label_3a91c8;
        case 0x3a91ccu: goto label_3a91cc;
        case 0x3a91d0u: goto label_3a91d0;
        case 0x3a91d4u: goto label_3a91d4;
        case 0x3a91d8u: goto label_3a91d8;
        case 0x3a91dcu: goto label_3a91dc;
        case 0x3a91e0u: goto label_3a91e0;
        case 0x3a91e4u: goto label_3a91e4;
        case 0x3a91e8u: goto label_3a91e8;
        case 0x3a91ecu: goto label_3a91ec;
        case 0x3a91f0u: goto label_3a91f0;
        case 0x3a91f4u: goto label_3a91f4;
        case 0x3a91f8u: goto label_3a91f8;
        case 0x3a91fcu: goto label_3a91fc;
        case 0x3a9200u: goto label_3a9200;
        case 0x3a9204u: goto label_3a9204;
        case 0x3a9208u: goto label_3a9208;
        case 0x3a920cu: goto label_3a920c;
        case 0x3a9210u: goto label_3a9210;
        case 0x3a9214u: goto label_3a9214;
        case 0x3a9218u: goto label_3a9218;
        case 0x3a921cu: goto label_3a921c;
        case 0x3a9220u: goto label_3a9220;
        case 0x3a9224u: goto label_3a9224;
        case 0x3a9228u: goto label_3a9228;
        case 0x3a922cu: goto label_3a922c;
        case 0x3a9230u: goto label_3a9230;
        case 0x3a9234u: goto label_3a9234;
        case 0x3a9238u: goto label_3a9238;
        case 0x3a923cu: goto label_3a923c;
        case 0x3a9240u: goto label_3a9240;
        case 0x3a9244u: goto label_3a9244;
        case 0x3a9248u: goto label_3a9248;
        case 0x3a924cu: goto label_3a924c;
        case 0x3a9250u: goto label_3a9250;
        case 0x3a9254u: goto label_3a9254;
        case 0x3a9258u: goto label_3a9258;
        case 0x3a925cu: goto label_3a925c;
        case 0x3a9260u: goto label_3a9260;
        case 0x3a9264u: goto label_3a9264;
        default: break;
    }

    ctx->pc = 0x3a9090u;

label_3a9090:
    // 0x3a9090: 0x27bdfaf0  addiu       $sp, $sp, -0x510
    ctx->pc = 0x3a9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966000));
label_3a9094:
    // 0x3a9094: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x3a9094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
label_3a9098:
    // 0x3a9098: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x3a9098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
label_3a909c:
    // 0x3a909c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a909cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a90a0:
    // 0x3a90a0: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x3a90a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_3a90a4:
    // 0x3a90a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a90a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a90a8:
    // 0x3a90a8: 0x7fb404c0  sq          $s4, 0x4C0($sp)
    ctx->pc = 0x3a90a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 20));
label_3a90ac:
    // 0x3a90ac: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x3a90acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
label_3a90b0:
    // 0x3a90b0: 0xffbf04b0  sd          $ra, 0x4B0($sp)
    ctx->pc = 0x3a90b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 31));
label_3a90b4:
    // 0x3a90b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a90b8:
    // 0x3a90b8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a90b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a90bc:
    // 0x3a90bc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a90bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a90c0:
    // 0x3a90c0: 0x40f809  jalr        $v0
label_3a90c4:
    if (ctx->pc == 0x3A90C4u) {
        ctx->pc = 0x3A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90C0u;
        // 0x3a90c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90C8u;
        goto label_3a90c8;
    }
    ctx->pc = 0x3A90C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A90C8u);
        ctx->pc = 0x3A90C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90C0u;
        // 0x3a90c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A90C0u, 0x3A90C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A90C8u;
label_3a90c8:
    // 0x3a90c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3a90c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a90cc:
    // 0x3a90cc: 0xc0e858c  jal         func_3A1630
label_3a90d0:
    if (ctx->pc == 0x3A90D0u) {
        ctx->pc = 0x3A90D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90CCu;
        // 0x3a90d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90D4u;
        goto label_3a90d4;
    }
    ctx->pc = 0x3A90CCu;
    SET_GPR_U32(ctx, 31, 0x3A90D4u);
    ctx->pc = 0x3A90D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90CCu;
    // 0x3a90d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A90CCu, 0x3A90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90D4u;
label_3a90d4:
    // 0x3a90d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a90d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a90d8:
    // 0x3a90d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a90d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a90dc:
    // 0x3a90dc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3a90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3a90e0:
    // 0x3a90e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a90e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a90e4:
    // 0x3a90e4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3a90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3a90e8:
    // 0x3a90e8: 0xc0ea146  jal         func_3A8518
label_3a90ec:
    if (ctx->pc == 0x3A90ECu) {
        ctx->pc = 0x3A90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90E8u;
        // 0x3a90ec: 0xe62000bc  swc1        $f0, 0xBC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90F0u;
        goto label_3a90f0;
    }
    ctx->pc = 0x3A90E8u;
    SET_GPR_U32(ctx, 31, 0x3A90F0u);
    ctx->pc = 0x3A90ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90E8u;
    // 0x3a90ec: 0xe62000bc  swc1        $f0, 0xBC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A90E8u, 0x3A90F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90F0u;
label_3a90f0:
    // 0x3a90f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a90f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a90f4:
    // 0x3a90f4: 0xc0ea12a  jal         func_3A84A8
label_3a90f8:
    if (ctx->pc == 0x3A90F8u) {
        ctx->pc = 0x3A90F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90F4u;
        // 0x3a90f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A90FCu;
        goto label_3a90fc;
    }
    ctx->pc = 0x3A90F4u;
    SET_GPR_U32(ctx, 31, 0x3A90FCu);
    ctx->pc = 0x3A90F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90F4u;
    // 0x3a90f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A90F4u, 0x3A90FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90FCu;
label_3a90fc:
    // 0x3a90fc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a90fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9100:
    // 0x3a9100: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a9100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a9104:
    // 0x3a9104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a9104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9108:
    // 0x3a9108: 0xc0ea12a  jal         func_3A84A8
label_3a910c:
    if (ctx->pc == 0x3A910Cu) {
        ctx->pc = 0x3A910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9108u;
        // 0x3a910c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9110u;
        goto label_3a9110;
    }
    ctx->pc = 0x3A9108u;
    SET_GPR_U32(ctx, 31, 0x3A9110u);
    ctx->pc = 0x3A910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9108u;
    // 0x3a910c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A9108u, 0x3A9110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9110u;
label_3a9110:
    // 0x3a9110: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a9110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a9114:
    // 0x3a9114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a9118:
    // 0x3a9118: 0xc0ea146  jal         func_3A8518
label_3a911c:
    if (ctx->pc == 0x3A911Cu) {
        ctx->pc = 0x3A911Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9118u;
        // 0x3a911c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9120u;
        goto label_3a9120;
    }
    ctx->pc = 0x3A9118u;
    SET_GPR_U32(ctx, 31, 0x3A9120u);
    ctx->pc = 0x3A911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9118u;
    // 0x3a911c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9118u, 0x3A9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9120u;
label_3a9120:
    // 0x3a9120: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a9120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9124:
    // 0x3a9124: 0xc0ea14c  jal         func_3A8530
label_3a9128:
    if (ctx->pc == 0x3A9128u) {
        ctx->pc = 0x3A9128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9124u;
        // 0x3a9128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A912Cu;
        goto label_3a912c;
    }
    ctx->pc = 0x3A9124u;
    SET_GPR_U32(ctx, 31, 0x3A912Cu);
    ctx->pc = 0x3A9128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9124u;
    // 0x3a9128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A9124u, 0x3A912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A912Cu;
label_3a912c:
    // 0x3a912c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a912cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a9130:
    // 0x3a9130: 0xc0ea146  jal         func_3A8518
label_3a9134:
    if (ctx->pc == 0x3A9134u) {
        ctx->pc = 0x3A9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9130u;
        // 0x3a9134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9138u;
        goto label_3a9138;
    }
    ctx->pc = 0x3A9130u;
    SET_GPR_U32(ctx, 31, 0x3A9138u);
    ctx->pc = 0x3A9134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9130u;
    // 0x3a9134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A9130u, 0x3A9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9138u;
label_3a9138:
    // 0x3a9138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a913c:
    // 0x3a913c: 0xc0e862e  jal         func_3A18B8
label_3a9140:
    if (ctx->pc == 0x3A9140u) {
        ctx->pc = 0x3A9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A913Cu;
        // 0x3a9140: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9144u;
        goto label_3a9144;
    }
    ctx->pc = 0x3A913Cu;
    SET_GPR_U32(ctx, 31, 0x3A9144u);
    ctx->pc = 0x3A9140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A913Cu;
    // 0x3a9140: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3A913Cu, 0x3A9144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9144u;
label_3a9144:
    // 0x3a9144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9148:
    // 0x3a9148: 0xc0e896c  jal         func_3A25B0
label_3a914c:
    if (ctx->pc == 0x3A914Cu) {
        ctx->pc = 0x3A914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9148u;
        // 0x3a914c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9150u;
        goto label_3a9150;
    }
    ctx->pc = 0x3A9148u;
    SET_GPR_U32(ctx, 31, 0x3A9150u);
    ctx->pc = 0x3A914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9148u;
    // 0x3a914c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3A9148u, 0x3A9150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9150u;
label_3a9150:
    // 0x3a9150: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a9150u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9154:
    // 0x3a9154: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3a9154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3a9158:
    // 0x3a9158: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3a9158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a915c:
    // 0x3a915c: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3a915cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3a9160:
    // 0x3a9160: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3a9160u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3a9164:
    // 0x3a9164: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x3a9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_3a9168:
    // 0x3a9168: 0x84620454  lh          $v0, 0x454($v1)
    ctx->pc = 0x3a9168u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1108)));
label_3a916c:
    // 0x3a916c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_3a9170:
    if (ctx->pc == 0x3A9170u) {
        ctx->pc = 0x3A9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A916Cu;
        // 0x3a9170: 0x7bb00500  lq          $s0, 0x500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9174u;
        goto label_3a9174;
    }
    ctx->pc = 0x3A916Cu;
    {
        const bool branch_taken_0x3a916c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A916Cu;
        // 0x3a9170: 0x7bb00500  lq          $s0, 0x500($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a916c) {
            ctx->pc = 0x3A9248u;
            goto label_3a9248;
        }
    }
    ctx->pc = 0x3A9174u;
label_3a9174:
    // 0x3a9174: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3a9174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3a9178:
    // 0x3a9178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a917c:
    // 0x3a917c: 0xc0e911e  jal         func_3A4478
label_3a9180:
    if (ctx->pc == 0x3A9180u) {
        ctx->pc = 0x3A9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A917Cu;
        // 0x3a9180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9184u;
        goto label_3a9184;
    }
    ctx->pc = 0x3A917Cu;
    SET_GPR_U32(ctx, 31, 0x3A9184u);
    ctx->pc = 0x3A9180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A917Cu;
    // 0x3a9180: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3A917Cu, 0x3A9184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9184u;
label_3a9184:
    // 0x3a9184: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a9184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a9188:
    // 0x3a9188: 0x7bab0030  lq          $t3, 0x30($sp)
    ctx->pc = 0x3a9188u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a918c:
    // 0x3a918c: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x3a918cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_3a9190:
    // 0x3a9190: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a9190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3a9194:
    // 0x3a9194: 0x7fab0070  sq          $t3, 0x70($sp)
    ctx->pc = 0x3a9194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 11));
label_3a9198:
    // 0x3a9198: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3a9198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3a919c:
    // 0x3a919c: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x3a919cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
label_3a91a0:
    // 0x3a91a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a91a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a91a4:
    // 0x3a91a4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3a91a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a91a8:
    // 0x3a91a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a91a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a91ac:
    // 0x3a91ac: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a91acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a91b0:
    // 0x3a91b0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a91b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a91b4:
    // 0x3a91b4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3a91b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a91b8:
    // 0x3a91b8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3a91b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a91bc:
    // 0x3a91bc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a91bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a91c0:
    // 0x3a91c0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3a91c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a91c4:
    // 0x3a91c4: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3a91c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a91c8:
    // 0x3a91c8: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3a91c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a91cc:
    // 0x3a91cc: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3a91ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a91d0:
    // 0x3a91d0: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3a91d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a91d4:
    // 0x3a91d4: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3a91d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a91d8:
    // 0x3a91d8: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3a91d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a91dc:
    // 0x3a91dc: 0x482b2800  qmfc2.ni    $t3, $vf5
    ctx->pc = 0x3a91dcu;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[5]));
label_3a91e0:
    // 0x3a91e0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a91e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a91e4:
    // 0x3a91e4: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x3a91e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3a91e8:
    // 0x3a91e8: 0x7fab0080  sq          $t3, 0x80($sp)
    ctx->pc = 0x3a91e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 11));
label_3a91ec:
    // 0x3a91ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3a91ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3a91f0:
    // 0x3a91f0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a91f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3a91f4:
    // 0x3a91f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a91f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a91f8:
    // 0x3a91f8: 0x26101c98  addiu       $s0, $s0, 0x1C98
    ctx->pc = 0x3a91f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7320));
label_3a91fc:
    // 0x3a91fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a91fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9200:
    // 0x3a9200: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3a9200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a9204:
    // 0x3a9204: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x3a9204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3a9208:
    // 0x3a9208: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x3a9208u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3a920c:
    // 0x3a920c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x3a920cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3a9210:
    // 0x3a9210: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x3a9210u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3a9214:
    // 0x3a9214: 0xafb30040  sw          $s3, 0x40($sp)
    ctx->pc = 0x3a9214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 19));
label_3a9218:
    // 0x3a9218: 0xafb40050  sw          $s4, 0x50($sp)
    ctx->pc = 0x3a9218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 20));
label_3a921c:
    // 0x3a921c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3a9220:
    // 0x3a9220: 0x7fab0070  sq          $t3, 0x70($sp)
    ctx->pc = 0x3a9220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 11));
label_3a9224:
    // 0x3a9224: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x3a9224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_3a9228:
    // 0x3a9228: 0x7fab0090  sq          $t3, 0x90($sp)
    ctx->pc = 0x3a9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 11));
label_3a922c:
    // 0x3a922c: 0x7fab0020  sq          $t3, 0x20($sp)
    ctx->pc = 0x3a922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 11));
label_3a9230:
    // 0x3a9230: 0xc0ea040  jal         func_3A8100
label_3a9234:
    if (ctx->pc == 0x3A9234u) {
        ctx->pc = 0x3A9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9230u;
        // 0x3a9234: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9238u;
        goto label_3a9238;
    }
    ctx->pc = 0x3A9230u;
    SET_GPR_U32(ctx, 31, 0x3A9238u);
    ctx->pc = 0x3A9234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9230u;
    // 0x3a9234: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x3A9230u, 0x3A9238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9238u;
label_3a9238:
    // 0x3a9238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a9238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a923c:
    // 0x3a923c: 0xc0f15bc  jal         func_3C56F0
label_3a9240:
    if (ctx->pc == 0x3A9240u) {
        ctx->pc = 0x3A9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A923Cu;
        // 0x3a9240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9244u;
        goto label_3a9244;
    }
    ctx->pc = 0x3A923Cu;
    SET_GPR_U32(ctx, 31, 0x3A9244u);
    ctx->pc = 0x3A9240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A923Cu;
    // 0x3a9240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3A923Cu, 0x3A9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9244u;
label_3a9244:
    // 0x3a9244: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x3a9244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3a9248:
    // 0x3a9248: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x3a9248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3a924c:
    // 0x3a924c: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x3a924cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3a9250:
    // 0x3a9250: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x3a9250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3a9254:
    // 0x3a9254: 0x7bb404c0  lq          $s4, 0x4C0($sp)
    ctx->pc = 0x3a9254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3a9258:
    // 0x3a9258: 0xdfbf04b0  ld          $ra, 0x4B0($sp)
    ctx->pc = 0x3a9258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
label_3a925c:
    // 0x3a925c: 0x3e00008  jr          $ra
label_3a9260:
    if (ctx->pc == 0x3A9260u) {
        ctx->pc = 0x3A9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A925Cu;
        // 0x3a9260: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9264u;
        goto label_3a9264;
    }
    ctx->pc = 0x3A925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A925Cu;
        // 0x3a9260: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9264u;
label_3a9264:
    // 0x3a9264: 0x0  nop
    ctx->pc = 0x3a9264u;
    // NOP
    ctx->pc = 0x3a9268u;
}
