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

// Function: sub_00414F68
// Address: 0x414f68 - 0x4150e0
void sub_00414F68_0x414f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414F68_0x414f68");
#endif

    switch (ctx->pc) {
        case 0x414f68u: goto label_414f68;
        case 0x414f6cu: goto label_414f6c;
        case 0x414f70u: goto label_414f70;
        case 0x414f74u: goto label_414f74;
        case 0x414f78u: goto label_414f78;
        case 0x414f7cu: goto label_414f7c;
        case 0x414f80u: goto label_414f80;
        case 0x414f84u: goto label_414f84;
        case 0x414f88u: goto label_414f88;
        case 0x414f8cu: goto label_414f8c;
        case 0x414f90u: goto label_414f90;
        case 0x414f94u: goto label_414f94;
        case 0x414f98u: goto label_414f98;
        case 0x414f9cu: goto label_414f9c;
        case 0x414fa0u: goto label_414fa0;
        case 0x414fa4u: goto label_414fa4;
        case 0x414fa8u: goto label_414fa8;
        case 0x414facu: goto label_414fac;
        case 0x414fb0u: goto label_414fb0;
        case 0x414fb4u: goto label_414fb4;
        case 0x414fb8u: goto label_414fb8;
        case 0x414fbcu: goto label_414fbc;
        case 0x414fc0u: goto label_414fc0;
        case 0x414fc4u: goto label_414fc4;
        case 0x414fc8u: goto label_414fc8;
        case 0x414fccu: goto label_414fcc;
        case 0x414fd0u: goto label_414fd0;
        case 0x414fd4u: goto label_414fd4;
        case 0x414fd8u: goto label_414fd8;
        case 0x414fdcu: goto label_414fdc;
        case 0x414fe0u: goto label_414fe0;
        case 0x414fe4u: goto label_414fe4;
        case 0x414fe8u: goto label_414fe8;
        case 0x414fecu: goto label_414fec;
        case 0x414ff0u: goto label_414ff0;
        case 0x414ff4u: goto label_414ff4;
        case 0x414ff8u: goto label_414ff8;
        case 0x414ffcu: goto label_414ffc;
        case 0x415000u: goto label_415000;
        case 0x415004u: goto label_415004;
        case 0x415008u: goto label_415008;
        case 0x41500cu: goto label_41500c;
        case 0x415010u: goto label_415010;
        case 0x415014u: goto label_415014;
        case 0x415018u: goto label_415018;
        case 0x41501cu: goto label_41501c;
        case 0x415020u: goto label_415020;
        case 0x415024u: goto label_415024;
        case 0x415028u: goto label_415028;
        case 0x41502cu: goto label_41502c;
        case 0x415030u: goto label_415030;
        case 0x415034u: goto label_415034;
        case 0x415038u: goto label_415038;
        case 0x41503cu: goto label_41503c;
        case 0x415040u: goto label_415040;
        case 0x415044u: goto label_415044;
        case 0x415048u: goto label_415048;
        case 0x41504cu: goto label_41504c;
        case 0x415050u: goto label_415050;
        case 0x415054u: goto label_415054;
        case 0x415058u: goto label_415058;
        case 0x41505cu: goto label_41505c;
        case 0x415060u: goto label_415060;
        case 0x415064u: goto label_415064;
        case 0x415068u: goto label_415068;
        case 0x41506cu: goto label_41506c;
        case 0x415070u: goto label_415070;
        case 0x415074u: goto label_415074;
        case 0x415078u: goto label_415078;
        case 0x41507cu: goto label_41507c;
        case 0x415080u: goto label_415080;
        case 0x415084u: goto label_415084;
        case 0x415088u: goto label_415088;
        case 0x41508cu: goto label_41508c;
        case 0x415090u: goto label_415090;
        case 0x415094u: goto label_415094;
        case 0x415098u: goto label_415098;
        case 0x41509cu: goto label_41509c;
        case 0x4150a0u: goto label_4150a0;
        case 0x4150a4u: goto label_4150a4;
        case 0x4150a8u: goto label_4150a8;
        case 0x4150acu: goto label_4150ac;
        case 0x4150b0u: goto label_4150b0;
        case 0x4150b4u: goto label_4150b4;
        case 0x4150b8u: goto label_4150b8;
        case 0x4150bcu: goto label_4150bc;
        case 0x4150c0u: goto label_4150c0;
        case 0x4150c4u: goto label_4150c4;
        case 0x4150c8u: goto label_4150c8;
        case 0x4150ccu: goto label_4150cc;
        case 0x4150d0u: goto label_4150d0;
        case 0x4150d4u: goto label_4150d4;
        case 0x4150d8u: goto label_4150d8;
        case 0x4150dcu: goto label_4150dc;
        default: break;
    }

    ctx->pc = 0x414f68u;

label_414f68:
    // 0x414f68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x414f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_414f6c:
    // 0x414f6c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x414f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_414f70:
    // 0x414f70: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x414f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_414f74:
    // 0x414f74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x414f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_414f78:
    // 0x414f78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x414f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_414f7c:
    // 0x414f7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x414f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_414f80:
    // 0x414f80: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x414f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_414f84:
    // 0x414f84: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x414f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_414f88:
    // 0x414f88: 0x1a00004c  blez        $s0, . + 4 + (0x4C << 2)
label_414f8c:
    if (ctx->pc == 0x414F8Cu) {
        ctx->pc = 0x414F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F88u;
        // 0x414f8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414F90u;
        goto label_414f90;
    }
    ctx->pc = 0x414F88u;
    {
        const bool branch_taken_0x414f88 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x414F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414F88u;
        // 0x414f8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414f88) {
            ctx->pc = 0x4150BCu;
            goto label_4150bc;
        }
    }
    ctx->pc = 0x414F90u;
label_414f90:
    // 0x414f90: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x414f90u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_414f94:
    // 0x414f94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x414f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_414f98:
    // 0x414f98: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x414f98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_414f9c:
    // 0x414f9c: 0x2455483c  addiu       $s5, $v0, 0x483C
    ctx->pc = 0x414f9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 18492));
label_414fa0:
    // 0x414fa0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x414fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_414fa4:
    // 0x414fa4: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x414fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_414fa8:
    // 0x414fa8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x414fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_414fac:
    // 0x414fac: 0x24a592f0  addiu       $a1, $a1, -0x6D10
    ctx->pc = 0x414facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939376));
label_414fb0:
    // 0x414fb0: 0x25089308  addiu       $t0, $t0, -0x6CF8
    ctx->pc = 0x414fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939400));
label_414fb4:
    // 0x414fb4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x414fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_414fb8:
    // 0x414fb8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x414fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_414fbc:
    // 0x414fbc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x414fbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_414fc0:
    // 0x414fc0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x414fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_414fc4:
    // 0x414fc4: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x414fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_414fc8:
    // 0x414fc8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x414fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_414fcc:
    // 0x414fcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x414fccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414fd0:
    // 0x414fd0: 0x40f809  jalr        $v0
label_414fd4:
    if (ctx->pc == 0x414FD4u) {
        ctx->pc = 0x414FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414FD0u;
        // 0x414fd4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414FD8u;
        goto label_414fd8;
    }
    ctx->pc = 0x414FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414FD8u);
        ctx->pc = 0x414FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414FD0u;
        // 0x414fd4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414FD0u, 0x414FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414FD8u;
label_414fd8:
    // 0x414fd8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x414fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_414fdc:
    // 0x414fdc: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
label_414fe0:
    if (ctx->pc == 0x414FE0u) {
        ctx->pc = 0x414FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414FDCu;
        // 0x414fe0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414FE4u;
        goto label_414fe4;
    }
    ctx->pc = 0x414FDCu;
    {
        const bool branch_taken_0x414fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x414FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414FDCu;
        // 0x414fe0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414fdc) {
            ctx->pc = 0x4150B8u;
            goto label_4150b8;
        }
    }
    ctx->pc = 0x414FE4u;
label_414fe4:
    // 0x414fe4: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x414fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_414fe8:
    // 0x414fe8: 0x240601f0  addiu       $a2, $zero, 0x1F0
    ctx->pc = 0x414fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_414fec:
    // 0x414fec: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x414fecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_414ff0:
    // 0x414ff0: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x414ff0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_414ff4:
    // 0x414ff4: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x414ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_414ff8:
    // 0x414ff8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x414ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_414ffc:
    // 0x414ffc: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x414ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_415000:
    // 0x415000: 0x261092c0  addiu       $s0, $s0, -0x6D40
    ctx->pc = 0x415000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939328));
label_415004:
    // 0x415004: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x415004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_415008:
    // 0x415008: 0x263192c8  addiu       $s1, $s1, -0x6D38
    ctx->pc = 0x415008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939336));
label_41500c:
    // 0x41500c: 0x3012  mflo        $a2
    ctx->pc = 0x41500cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_415010:
    // 0x415010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415014:
    // 0x415014: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x415014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_415018:
    // 0x415018: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x415018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41501c:
    // 0x41501c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x41501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_415020:
    // 0x415020: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x415020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415024:
    // 0x415024: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x415024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_415028:
    // 0x415028: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x415028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_41502c:
    // 0x41502c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x41502cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415030:
    // 0x415030: 0x40f809  jalr        $v0
label_415034:
    if (ctx->pc == 0x415034u) {
        ctx->pc = 0x415034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415030u;
        // 0x415034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415038u;
        goto label_415038;
    }
    ctx->pc = 0x415030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415038u);
        ctx->pc = 0x415034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415030u;
        // 0x415034: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415030u, 0x415038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415038u;
label_415038:
    // 0x415038: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x415038u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_41503c:
    // 0x41503c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41503cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415040:
    // 0x415040: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x415040u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_415044:
    // 0x415044: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x415044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415048:
    // 0x415048: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x415048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_41504c:
    // 0x41504c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x41504cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_415050:
    // 0x415050: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x415050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_415054:
    // 0x415054: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x415054u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_415058:
    // 0x415058: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x415058u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_41505c:
    // 0x41505c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x41505cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415060:
    // 0x415060: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x415060u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_415064:
    // 0x415064: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x415064u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415068:
    // 0x415068: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x415068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_41506c:
    // 0x41506c: 0x40f809  jalr        $v0
label_415070:
    if (ctx->pc == 0x415070u) {
        ctx->pc = 0x415070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41506Cu;
        // 0x415070: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415074u;
        goto label_415074;
    }
    ctx->pc = 0x41506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415074u);
        ctx->pc = 0x415070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41506Cu;
        // 0x415070: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41506Cu, 0x415074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415074u;
label_415074:
    // 0x415074: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x415074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_415078:
    // 0x415078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x415078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41507c:
    // 0x41507c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_415080:
    if (ctx->pc == 0x415080u) {
        ctx->pc = 0x415080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41507Cu;
        // 0x415080: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415084u;
        goto label_415084;
    }
    ctx->pc = 0x41507Cu;
    {
        const bool branch_taken_0x41507c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x415080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41507Cu;
        // 0x415080: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41507c) {
            ctx->pc = 0x4150B4u;
            goto label_4150b4;
        }
    }
    ctx->pc = 0x415084u;
label_415084:
    // 0x415084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x415084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415088:
    // 0x415088: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x415088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_41508c:
    // 0x41508c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x41508cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_415090:
    // 0x415090: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x415090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_415094:
    // 0x415094: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x415094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_415098:
    // 0x415098: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x415098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_41509c:
    // 0x41509c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x41509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4150a0:
    // 0x4150a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4150a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4150a4:
    // 0x4150a4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4150a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4150a8:
    // 0x4150a8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x4150a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4150ac:
    // 0x4150ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_4150b0:
    if (ctx->pc == 0x4150B0u) {
        ctx->pc = 0x4150B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4150ACu;
        // 0x4150b0: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4150B4u;
        goto label_4150b4;
    }
    ctx->pc = 0x4150ACu;
    {
        const bool branch_taken_0x4150ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4150B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4150ACu;
        // 0x4150b0: 0x24c601f0  addiu       $a2, $a2, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4150ac) {
            ctx->pc = 0x415088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415088;
        }
    }
    ctx->pc = 0x4150B4u;
label_4150b4:
    // 0x4150b4: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x4150b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4150b8:
    // 0x4150b8: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x4150b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_4150bc:
    // 0x4150bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4150bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4150c0:
    // 0x4150c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4150c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4150c4:
    // 0x4150c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4150c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4150c8:
    // 0x4150c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4150c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4150cc:
    // 0x4150cc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4150ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4150d0:
    // 0x4150d0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4150d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4150d4:
    // 0x4150d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4150d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4150d8:
    // 0x4150d8: 0x3e00008  jr          $ra
label_4150dc:
    if (ctx->pc == 0x4150DCu) {
        ctx->pc = 0x4150DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4150D8u;
        // 0x4150dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4150E0u;
        goto label_fallthrough_0x4150d8;
    }
    ctx->pc = 0x4150D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4150DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4150D8u;
        // 0x4150dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4150D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4150d8:
    ctx->pc = 0x4150E0u;
}
