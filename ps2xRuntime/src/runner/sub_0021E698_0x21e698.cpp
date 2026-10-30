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

// Function: sub_0021E698
// Address: 0x21e698 - 0x21e940
void sub_0021E698_0x21e698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E698_0x21e698");
#endif

    switch (ctx->pc) {
        case 0x21e698u: goto label_21e698;
        case 0x21e69cu: goto label_21e69c;
        case 0x21e6a0u: goto label_21e6a0;
        case 0x21e6a4u: goto label_21e6a4;
        case 0x21e6a8u: goto label_21e6a8;
        case 0x21e6acu: goto label_21e6ac;
        case 0x21e6b0u: goto label_21e6b0;
        case 0x21e6b4u: goto label_21e6b4;
        case 0x21e6b8u: goto label_21e6b8;
        case 0x21e6bcu: goto label_21e6bc;
        case 0x21e6c0u: goto label_21e6c0;
        case 0x21e6c4u: goto label_21e6c4;
        case 0x21e6c8u: goto label_21e6c8;
        case 0x21e6ccu: goto label_21e6cc;
        case 0x21e6d0u: goto label_21e6d0;
        case 0x21e6d4u: goto label_21e6d4;
        case 0x21e6d8u: goto label_21e6d8;
        case 0x21e6dcu: goto label_21e6dc;
        case 0x21e6e0u: goto label_21e6e0;
        case 0x21e6e4u: goto label_21e6e4;
        case 0x21e6e8u: goto label_21e6e8;
        case 0x21e6ecu: goto label_21e6ec;
        case 0x21e6f0u: goto label_21e6f0;
        case 0x21e6f4u: goto label_21e6f4;
        case 0x21e6f8u: goto label_21e6f8;
        case 0x21e6fcu: goto label_21e6fc;
        case 0x21e700u: goto label_21e700;
        case 0x21e704u: goto label_21e704;
        case 0x21e708u: goto label_21e708;
        case 0x21e70cu: goto label_21e70c;
        case 0x21e710u: goto label_21e710;
        case 0x21e714u: goto label_21e714;
        case 0x21e718u: goto label_21e718;
        case 0x21e71cu: goto label_21e71c;
        case 0x21e720u: goto label_21e720;
        case 0x21e724u: goto label_21e724;
        case 0x21e728u: goto label_21e728;
        case 0x21e72cu: goto label_21e72c;
        case 0x21e730u: goto label_21e730;
        case 0x21e734u: goto label_21e734;
        case 0x21e738u: goto label_21e738;
        case 0x21e73cu: goto label_21e73c;
        case 0x21e740u: goto label_21e740;
        case 0x21e744u: goto label_21e744;
        case 0x21e748u: goto label_21e748;
        case 0x21e74cu: goto label_21e74c;
        case 0x21e750u: goto label_21e750;
        case 0x21e754u: goto label_21e754;
        case 0x21e758u: goto label_21e758;
        case 0x21e75cu: goto label_21e75c;
        case 0x21e760u: goto label_21e760;
        case 0x21e764u: goto label_21e764;
        case 0x21e768u: goto label_21e768;
        case 0x21e76cu: goto label_21e76c;
        case 0x21e770u: goto label_21e770;
        case 0x21e774u: goto label_21e774;
        case 0x21e778u: goto label_21e778;
        case 0x21e77cu: goto label_21e77c;
        case 0x21e780u: goto label_21e780;
        case 0x21e784u: goto label_21e784;
        case 0x21e788u: goto label_21e788;
        case 0x21e78cu: goto label_21e78c;
        case 0x21e790u: goto label_21e790;
        case 0x21e794u: goto label_21e794;
        case 0x21e798u: goto label_21e798;
        case 0x21e79cu: goto label_21e79c;
        case 0x21e7a0u: goto label_21e7a0;
        case 0x21e7a4u: goto label_21e7a4;
        case 0x21e7a8u: goto label_21e7a8;
        case 0x21e7acu: goto label_21e7ac;
        case 0x21e7b0u: goto label_21e7b0;
        case 0x21e7b4u: goto label_21e7b4;
        case 0x21e7b8u: goto label_21e7b8;
        case 0x21e7bcu: goto label_21e7bc;
        case 0x21e7c0u: goto label_21e7c0;
        case 0x21e7c4u: goto label_21e7c4;
        case 0x21e7c8u: goto label_21e7c8;
        case 0x21e7ccu: goto label_21e7cc;
        case 0x21e7d0u: goto label_21e7d0;
        case 0x21e7d4u: goto label_21e7d4;
        case 0x21e7d8u: goto label_21e7d8;
        case 0x21e7dcu: goto label_21e7dc;
        case 0x21e7e0u: goto label_21e7e0;
        case 0x21e7e4u: goto label_21e7e4;
        case 0x21e7e8u: goto label_21e7e8;
        case 0x21e7ecu: goto label_21e7ec;
        case 0x21e7f0u: goto label_21e7f0;
        case 0x21e7f4u: goto label_21e7f4;
        case 0x21e7f8u: goto label_21e7f8;
        case 0x21e7fcu: goto label_21e7fc;
        case 0x21e800u: goto label_21e800;
        case 0x21e804u: goto label_21e804;
        case 0x21e808u: goto label_21e808;
        case 0x21e80cu: goto label_21e80c;
        case 0x21e810u: goto label_21e810;
        case 0x21e814u: goto label_21e814;
        case 0x21e818u: goto label_21e818;
        case 0x21e81cu: goto label_21e81c;
        case 0x21e820u: goto label_21e820;
        case 0x21e824u: goto label_21e824;
        case 0x21e828u: goto label_21e828;
        case 0x21e82cu: goto label_21e82c;
        case 0x21e830u: goto label_21e830;
        case 0x21e834u: goto label_21e834;
        case 0x21e838u: goto label_21e838;
        case 0x21e83cu: goto label_21e83c;
        case 0x21e840u: goto label_21e840;
        case 0x21e844u: goto label_21e844;
        case 0x21e848u: goto label_21e848;
        case 0x21e84cu: goto label_21e84c;
        case 0x21e850u: goto label_21e850;
        case 0x21e854u: goto label_21e854;
        case 0x21e858u: goto label_21e858;
        case 0x21e85cu: goto label_21e85c;
        case 0x21e860u: goto label_21e860;
        case 0x21e864u: goto label_21e864;
        case 0x21e868u: goto label_21e868;
        case 0x21e86cu: goto label_21e86c;
        case 0x21e870u: goto label_21e870;
        case 0x21e874u: goto label_21e874;
        case 0x21e878u: goto label_21e878;
        case 0x21e87cu: goto label_21e87c;
        case 0x21e880u: goto label_21e880;
        case 0x21e884u: goto label_21e884;
        case 0x21e888u: goto label_21e888;
        case 0x21e88cu: goto label_21e88c;
        case 0x21e890u: goto label_21e890;
        case 0x21e894u: goto label_21e894;
        case 0x21e898u: goto label_21e898;
        case 0x21e89cu: goto label_21e89c;
        case 0x21e8a0u: goto label_21e8a0;
        case 0x21e8a4u: goto label_21e8a4;
        case 0x21e8a8u: goto label_21e8a8;
        case 0x21e8acu: goto label_21e8ac;
        case 0x21e8b0u: goto label_21e8b0;
        case 0x21e8b4u: goto label_21e8b4;
        case 0x21e8b8u: goto label_21e8b8;
        case 0x21e8bcu: goto label_21e8bc;
        case 0x21e8c0u: goto label_21e8c0;
        case 0x21e8c4u: goto label_21e8c4;
        case 0x21e8c8u: goto label_21e8c8;
        case 0x21e8ccu: goto label_21e8cc;
        case 0x21e8d0u: goto label_21e8d0;
        case 0x21e8d4u: goto label_21e8d4;
        case 0x21e8d8u: goto label_21e8d8;
        case 0x21e8dcu: goto label_21e8dc;
        case 0x21e8e0u: goto label_21e8e0;
        case 0x21e8e4u: goto label_21e8e4;
        case 0x21e8e8u: goto label_21e8e8;
        case 0x21e8ecu: goto label_21e8ec;
        case 0x21e8f0u: goto label_21e8f0;
        case 0x21e8f4u: goto label_21e8f4;
        case 0x21e8f8u: goto label_21e8f8;
        case 0x21e8fcu: goto label_21e8fc;
        case 0x21e900u: goto label_21e900;
        case 0x21e904u: goto label_21e904;
        case 0x21e908u: goto label_21e908;
        case 0x21e90cu: goto label_21e90c;
        case 0x21e910u: goto label_21e910;
        case 0x21e914u: goto label_21e914;
        case 0x21e918u: goto label_21e918;
        case 0x21e91cu: goto label_21e91c;
        case 0x21e920u: goto label_21e920;
        case 0x21e924u: goto label_21e924;
        case 0x21e928u: goto label_21e928;
        case 0x21e92cu: goto label_21e92c;
        case 0x21e930u: goto label_21e930;
        case 0x21e934u: goto label_21e934;
        case 0x21e938u: goto label_21e938;
        case 0x21e93cu: goto label_21e93c;
        default: break;
    }

    ctx->pc = 0x21e698u;

label_21e698:
    // 0x21e698: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x21e698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_21e69c:
    // 0x21e69c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x21e69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_21e6a0:
    // 0x21e6a0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x21e6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_21e6a4:
    // 0x21e6a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e6a8:
    // 0x21e6a8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x21e6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_21e6ac:
    // 0x21e6ac: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x21e6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21e6b0:
    // 0x21e6b0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x21e6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_21e6b4:
    // 0x21e6b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21e6b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21e6b8:
    // 0x21e6b8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x21e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_21e6bc:
    // 0x21e6bc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x21e6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21e6c0:
    // 0x21e6c0: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x21e6c0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_21e6c4:
    // 0x21e6c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21e6c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e6c8:
    // 0x21e6c8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x21e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_21e6cc:
    // 0x21e6cc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x21e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_21e6d0:
    // 0x21e6d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_21e6d4:
    // 0x21e6d4: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x21e6d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_21e6d8:
    // 0x21e6d8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x21e6d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_21e6dc:
    // 0x21e6dc: 0x92220198  lbu         $v0, 0x198($s1)
    ctx->pc = 0x21e6dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 408)));
label_21e6e0:
    // 0x21e6e0: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_21e6e4:
    if (ctx->pc == 0x21E6E4u) {
        ctx->pc = 0x21E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6E0u;
        // 0x21e6e4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E6E8u;
        goto label_21e6e8;
    }
    ctx->pc = 0x21E6E0u;
    {
        const bool branch_taken_0x21e6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6E0u;
        // 0x21e6e4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e6e0) {
            ctx->pc = 0x21E870u;
            goto label_21e870;
        }
    }
    ctx->pc = 0x21E6E8u;
label_21e6e8:
    // 0x21e6e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21e6ec:
    // 0x21e6ec: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_21e6f0:
    // 0x21e6f0: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x21e6f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_21e6f4:
    // 0x21e6f4: 0x1480005e  bnez        $a0, . + 4 + (0x5E << 2)
label_21e6f8:
    if (ctx->pc == 0x21E6F8u) {
        ctx->pc = 0x21E6FCu;
        goto label_21e6fc;
    }
    ctx->pc = 0x21E6F4u;
    {
        const bool branch_taken_0x21e6f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e6f4) {
            ctx->pc = 0x21E870u;
            goto label_21e870;
        }
    }
    ctx->pc = 0x21E6FCu;
label_21e6fc:
    // 0x21e6fc: 0x92220194  lbu         $v0, 0x194($s1)
    ctx->pc = 0x21e6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 404)));
label_21e700:
    // 0x21e700: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_21e704:
    if (ctx->pc == 0x21E704u) {
        ctx->pc = 0x21E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E700u;
        // 0x21e704: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E708u;
        goto label_21e708;
    }
    ctx->pc = 0x21E700u;
    {
        const bool branch_taken_0x21e700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E700u;
        // 0x21e704: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e700) {
            ctx->pc = 0x21E720u;
            goto label_21e720;
        }
    }
    ctx->pc = 0x21E708u;
label_21e708:
    // 0x21e708: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x21e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_21e70c:
    // 0x21e70c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21e710:
    // 0x21e710: 0xc043d5e  jal         func_10F578
label_21e714:
    if (ctx->pc == 0x21E714u) {
        ctx->pc = 0x21E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E710u;
        // 0x21e714: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E718u;
        goto label_21e718;
    }
    ctx->pc = 0x21E710u;
    SET_GPR_U32(ctx, 31, 0x21E718u);
    ctx->pc = 0x21E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E710u;
    // 0x21e714: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21E710u, 0x21E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E718u;
label_21e718:
    // 0x21e718: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_21e71c:
    if (ctx->pc == 0x21E71Cu) {
        ctx->pc = 0x21E720u;
        goto label_21e720;
    }
    ctx->pc = 0x21E718u;
    {
        const bool branch_taken_0x21e718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e718) {
            ctx->pc = 0x21E870u;
            goto label_21e870;
        }
    }
    ctx->pc = 0x21E720u;
label_21e720:
    // 0x21e720: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e724:
    // 0x21e724: 0xc087b0e  jal         func_21EC38
label_21e728:
    if (ctx->pc == 0x21E728u) {
        ctx->pc = 0x21E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E724u;
        // 0x21e728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E72Cu;
        goto label_21e72c;
    }
    ctx->pc = 0x21E724u;
    SET_GPR_U32(ctx, 31, 0x21E72Cu);
    ctx->pc = 0x21E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E724u;
    // 0x21e728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x21E724u, 0x21E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E72Cu;
label_21e72c:
    // 0x21e72c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21e730:
    // 0x21e730: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21e730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21e734:
    // 0x21e734: 0xae320174  sw          $s2, 0x174($s1)
    ctx->pc = 0x21e734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 18));
label_21e738:
    // 0x21e738: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21e73c:
    // 0x21e73c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e740:
    // 0x21e740: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21e740u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_21e744:
    // 0x21e744: 0xa2200194  sb          $zero, 0x194($s1)
    ctx->pc = 0x21e744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 404), (uint8_t)GPR_U32(ctx, 0));
label_21e748:
    // 0x21e748: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x21e748u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_21e74c:
    // 0x21e74c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x21e74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_21e750:
    // 0x21e750: 0x60f809  jalr        $v1
label_21e754:
    if (ctx->pc == 0x21E754u) {
        ctx->pc = 0x21E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E750u;
        // 0x21e754: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E758u;
        goto label_21e758;
    }
    ctx->pc = 0x21E750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E758u);
        ctx->pc = 0x21E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E750u;
        // 0x21e754: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E750u, 0x21E758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E758u;
label_21e758:
    // 0x21e758: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x21e758u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21e75c:
    // 0x21e75c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x21e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21e760:
    // 0x21e760: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x21e760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_21e764:
    // 0x21e764: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x21e764u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_21e768:
    // 0x21e768: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e768u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21e76c:
    // 0x21e76c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21e76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_21e770:
    // 0x21e770: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x21e770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_21e774:
    // 0x21e774: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_21e778:
    // 0x21e778: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21e778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_21e77c:
    // 0x21e77c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x21e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_21e780:
    // 0x21e780: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21e780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_21e784:
    // 0x21e784: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21e784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21e788:
    // 0x21e788: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x21e788u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_21e78c:
    // 0x21e78c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e790:
    // 0x21e790: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x21e790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21e794:
    // 0x21e794: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x21e794u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21e798:
    // 0x21e798: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21e798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21e79c:
    // 0x21e79c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21e79cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21e7a0:
    // 0x21e7a0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21e7a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21e7a4:
    // 0x21e7a4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21e7a4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21e7a8:
    // 0x21e7a8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21e7a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21e7ac:
    // 0x21e7ac: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21e7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_21e7b0:
    // 0x21e7b0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21e7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_21e7b4:
    // 0x21e7b4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x21e7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_21e7b8:
    // 0x21e7b8: 0xc0878ea  jal         func_21E3A8
label_21e7bc:
    if (ctx->pc == 0x21E7BCu) {
        ctx->pc = 0x21E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7B8u;
        // 0x21e7bc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7C0u;
        goto label_21e7c0;
    }
    ctx->pc = 0x21E7B8u;
    SET_GPR_U32(ctx, 31, 0x21E7C0u);
    ctx->pc = 0x21E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7B8u;
    // 0x21e7bc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3A8u, 0x21E7B8u, 0x21E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7C0u;
label_21e7c0:
    // 0x21e7c0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21e7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21e7c4:
    // 0x21e7c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x21e7c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_21e7c8:
    // 0x21e7c8: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x21e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_21e7cc:
    // 0x21e7cc: 0xc044594  jal         func_111650
label_21e7d0:
    if (ctx->pc == 0x21E7D0u) {
        ctx->pc = 0x21E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7CCu;
        // 0x21e7d0: 0xe7b50064  swc1        $f21, 0x64($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7D4u;
        goto label_21e7d4;
    }
    ctx->pc = 0x21E7CCu;
    SET_GPR_U32(ctx, 31, 0x21E7D4u);
    ctx->pc = 0x21E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7CCu;
    // 0x21e7d0: 0xe7b50064  swc1        $f21, 0x64($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x21E7CCu, 0x21E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7D4u;
label_21e7d4:
    // 0x21e7d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e7d8:
    // 0x21e7d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21e7d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21e7dc:
    // 0x21e7dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21e7e0:
    // 0x21e7e0: 0x40f809  jalr        $v0
label_21e7e4:
    if (ctx->pc == 0x21E7E4u) {
        ctx->pc = 0x21E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7E0u;
        // 0x21e7e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7E8u;
        goto label_21e7e8;
    }
    ctx->pc = 0x21E7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E7E8u);
        ctx->pc = 0x21E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7E0u;
        // 0x21e7e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E7E0u, 0x21E7E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E7E8u;
label_21e7e8:
    // 0x21e7e8: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x21e7e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_21e7ec:
    // 0x21e7ec: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x21e7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21e7f0:
    // 0x21e7f0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21e7f4:
    // 0x21e7f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21e7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e7f8:
    // 0x21e7f8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x21e7f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_21e7fc:
    // 0x21e7fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21e7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21e800:
    // 0x21e800: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x21e800u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_21e804:
    // 0x21e804: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21e804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e808:
    // 0x21e808: 0xc044062  jal         func_110188
label_21e80c:
    if (ctx->pc == 0x21E80Cu) {
        ctx->pc = 0x21E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E808u;
        // 0x21e80c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E810u;
        goto label_21e810;
    }
    ctx->pc = 0x21E808u;
    SET_GPR_U32(ctx, 31, 0x21E810u);
    ctx->pc = 0x21E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E808u;
    // 0x21e80c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110188u, 0x21E808u, 0x21E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E810u;
label_21e810:
    // 0x21e810: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21e810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e814:
    // 0x21e814: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21e814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21e818:
    // 0x21e818: 0xae330188  sw          $s3, 0x188($s1)
    ctx->pc = 0x21e818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 19));
label_21e81c:
    // 0x21e81c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e820:
    // 0x21e820: 0xae340190  sw          $s4, 0x190($s1)
    ctx->pc = 0x21e820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 20));
label_21e824:
    // 0x21e824: 0xc044596  jal         func_111658
label_21e828:
    if (ctx->pc == 0x21E828u) {
        ctx->pc = 0x21E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E824u;
        // 0x21e828: 0xae320178  sw          $s2, 0x178($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E82Cu;
        goto label_21e82c;
    }
    ctx->pc = 0x21E824u;
    SET_GPR_U32(ctx, 31, 0x21E82Cu);
    ctx->pc = 0x21E828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E824u;
    // 0x21e828: 0xae320178  sw          $s2, 0x178($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111658u, 0x21E824u, 0x21E82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E82Cu;
label_21e82c:
    // 0x21e82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21e82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e830:
    // 0x21e830: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_21e834:
    if (ctx->pc == 0x21E834u) {
        ctx->pc = 0x21E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E830u;
        // 0x21e834: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E838u;
        goto label_21e838;
    }
    ctx->pc = 0x21E830u;
    {
        const bool branch_taken_0x21e830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e830) {
            ctx->pc = 0x21E834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E830u;
            // 0x21e834: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E868u;
            goto label_21e868;
        }
    }
    ctx->pc = 0x21E838u;
label_21e838:
    // 0x21e838: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x21e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_21e83c:
    // 0x21e83c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_21e840:
    if (ctx->pc == 0x21E840u) {
        ctx->pc = 0x21E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E83Cu;
        // 0x21e840: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E844u;
        goto label_21e844;
    }
    ctx->pc = 0x21E83Cu;
    {
        const bool branch_taken_0x21e83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e83c) {
            ctx->pc = 0x21E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E83Cu;
            // 0x21e840: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E868u;
            goto label_21e868;
        }
    }
    ctx->pc = 0x21E844u;
label_21e844:
    // 0x21e844: 0xc043cbc  jal         func_10F2F0
label_21e848:
    if (ctx->pc == 0x21E848u) {
        ctx->pc = 0x21E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E844u;
        // 0x21e848: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E84Cu;
        goto label_21e84c;
    }
    ctx->pc = 0x21E844u;
    SET_GPR_U32(ctx, 31, 0x21E84Cu);
    ctx->pc = 0x21E848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E844u;
    // 0x21e848: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x21E844u, 0x21E84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E84Cu;
label_21e84c:
    // 0x21e84c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_21e850:
    if (ctx->pc == 0x21E850u) {
        ctx->pc = 0x21E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E84Cu;
        // 0x21e850: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E854u;
        goto label_21e854;
    }
    ctx->pc = 0x21E84Cu;
    {
        const bool branch_taken_0x21e84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e84c) {
            ctx->pc = 0x21E850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E84Cu;
            // 0x21e850: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E868u;
            goto label_21e868;
        }
    }
    ctx->pc = 0x21E854u;
label_21e854:
    // 0x21e854: 0xae360170  sw          $s6, 0x170($s1)
    ctx->pc = 0x21e854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 22));
label_21e858:
    // 0x21e858: 0xc088d3e  jal         func_2234F8
label_21e85c:
    if (ctx->pc == 0x21E85Cu) {
        ctx->pc = 0x21E85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E858u;
        // 0x21e85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E860u;
        goto label_21e860;
    }
    ctx->pc = 0x21E858u;
    SET_GPR_U32(ctx, 31, 0x21E860u);
    ctx->pc = 0x21E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E858u;
    // 0x21e85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2234F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2234F8u, 0x21E858u, 0x21E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E860u;
label_21e860:
    // 0x21e860: 0x1000002a  b           . + 4 + (0x2A << 2)
label_21e864:
    if (ctx->pc == 0x21E864u) {
        ctx->pc = 0x21E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E860u;
        // 0x21e864: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E868u;
        goto label_21e868;
    }
    ctx->pc = 0x21E860u;
    {
        const bool branch_taken_0x21e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E860u;
        // 0x21e864: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e860) {
            ctx->pc = 0x21E90Cu;
            goto label_21e90c;
        }
    }
    ctx->pc = 0x21E868u;
label_21e868:
    // 0x21e868: 0x10000028  b           . + 4 + (0x28 << 2)
label_21e86c:
    if (ctx->pc == 0x21E86Cu) {
        ctx->pc = 0x21E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E868u;
        // 0x21e86c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E870u;
        goto label_21e870;
    }
    ctx->pc = 0x21E868u;
    {
        const bool branch_taken_0x21e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E868u;
        // 0x21e86c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e868) {
            ctx->pc = 0x21E90Cu;
            goto label_21e90c;
        }
    }
    ctx->pc = 0x21E870u;
label_21e870:
    // 0x21e870: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
label_21e874:
    if (ctx->pc == 0x21E874u) {
        ctx->pc = 0x21E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E870u;
        // 0x21e874: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E878u;
        goto label_21e878;
    }
    ctx->pc = 0x21E870u;
    {
        const bool branch_taken_0x21e870 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E870u;
        // 0x21e874: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e870) {
            ctx->pc = 0x21E904u;
            goto label_21e904;
        }
    }
    ctx->pc = 0x21E878u;
label_21e878:
    // 0x21e878: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21e878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e87c:
    // 0x21e87c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x21e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_21e880:
    // 0x21e880: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x21e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e884:
    // 0x21e884: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x21e884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_21e888:
    // 0x21e888: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x21e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_21e88c:
    // 0x21e88c: 0x40f809  jalr        $v0
label_21e890:
    if (ctx->pc == 0x21E890u) {
        ctx->pc = 0x21E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E88Cu;
        // 0x21e890: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E894u;
        goto label_21e894;
    }
    ctx->pc = 0x21E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E894u);
        ctx->pc = 0x21E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E88Cu;
        // 0x21e890: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E88Cu, 0x21E894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E894u;
label_21e894:
    // 0x21e894: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_21e898:
    if (ctx->pc == 0x21E898u) {
        ctx->pc = 0x21E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E894u;
        // 0x21e898: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E89Cu;
        goto label_21e89c;
    }
    ctx->pc = 0x21E894u;
    {
        const bool branch_taken_0x21e894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E894u;
        // 0x21e898: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e894) {
            ctx->pc = 0x21E908u;
            goto label_21e908;
        }
    }
    ctx->pc = 0x21E89Cu;
label_21e89c:
    // 0x21e89c: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_21e8a0:
    if (ctx->pc == 0x21E8A0u) {
        ctx->pc = 0x21E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E89Cu;
        // 0x21e8a0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8A4u;
        goto label_21e8a4;
    }
    ctx->pc = 0x21E89Cu;
    {
        const bool branch_taken_0x21e89c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E89Cu;
        // 0x21e8a0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e89c) {
            ctx->pc = 0x21E8E4u;
            goto label_21e8e4;
        }
    }
    ctx->pc = 0x21E8A4u;
label_21e8a4:
    // 0x21e8a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21e8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21e8a8:
    // 0x21e8a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e8ac:
    // 0x21e8ac: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x21e8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_21e8b0:
    // 0x21e8b0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x21e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_21e8b4:
    // 0x21e8b4: 0x60f809  jalr        $v1
label_21e8b8:
    if (ctx->pc == 0x21E8B8u) {
        ctx->pc = 0x21E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8B4u;
        // 0x21e8b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8BCu;
        goto label_21e8bc;
    }
    ctx->pc = 0x21E8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E8BCu);
        ctx->pc = 0x21E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8B4u;
        // 0x21e8b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E8B4u, 0x21E8BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E8BCu;
label_21e8bc:
    // 0x21e8bc: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x21e8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_21e8c0:
    // 0x21e8c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e8c4:
    // 0x21e8c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e8c8:
    // 0x21e8c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21e8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21e8cc:
    // 0x21e8cc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x21e8ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_21e8d0:
    // 0x21e8d0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x21e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_21e8d4:
    // 0x21e8d4: 0x60f809  jalr        $v1
label_21e8d8:
    if (ctx->pc == 0x21E8D8u) {
        ctx->pc = 0x21E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8D4u;
        // 0x21e8d8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8DCu;
        goto label_21e8dc;
    }
    ctx->pc = 0x21E8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E8DCu);
        ctx->pc = 0x21E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8D4u;
        // 0x21e8d8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E8D4u, 0x21E8DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E8DCu;
label_21e8dc:
    // 0x21e8dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_21e8e0:
    if (ctx->pc == 0x21E8E0u) {
        ctx->pc = 0x21E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8DCu;
        // 0x21e8e0: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8E4u;
        goto label_21e8e4;
    }
    ctx->pc = 0x21E8DCu;
    {
        const bool branch_taken_0x21e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8DCu;
        // 0x21e8e0: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8dc) {
            ctx->pc = 0x21E908u;
            goto label_21e908;
        }
    }
    ctx->pc = 0x21E8E4u;
label_21e8e4:
    // 0x21e8e4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x21e8e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_21e8e8:
    // 0x21e8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e8ec:
    // 0x21e8ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e8f0:
    // 0x21e8f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21e8f4:
    // 0x21e8f4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x21e8f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_21e8f8:
    // 0x21e8f8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x21e8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_21e8fc:
    // 0x21e8fc: 0x60f809  jalr        $v1
label_21e900:
    if (ctx->pc == 0x21E900u) {
        ctx->pc = 0x21E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8FCu;
        // 0x21e900: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E904u;
        goto label_21e904;
    }
    ctx->pc = 0x21E8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E904u);
        ctx->pc = 0x21E900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8FCu;
        // 0x21e900: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E8FCu, 0x21E904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E904u;
label_21e904:
    // 0x21e904: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x21e904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_21e908:
    // 0x21e908: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x21e908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_21e90c:
    // 0x21e90c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x21e90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21e910:
    // 0x21e910: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x21e910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21e914:
    // 0x21e914: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x21e914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21e918:
    // 0x21e918: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x21e918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21e91c:
    // 0x21e91c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x21e91cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21e920:
    // 0x21e920: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x21e920u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21e924:
    // 0x21e924: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x21e924u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21e928:
    // 0x21e928: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21e928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21e92c:
    // 0x21e92c: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x21e92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_21e930:
    // 0x21e930: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x21e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21e934:
    // 0x21e934: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x21e934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21e938:
    // 0x21e938: 0x3e00008  jr          $ra
label_21e93c:
    if (ctx->pc == 0x21E93Cu) {
        ctx->pc = 0x21E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E938u;
        // 0x21e93c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E940u;
        goto label_fallthrough_0x21e938;
    }
    ctx->pc = 0x21E938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E938u;
        // 0x21e93c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21e938:
    ctx->pc = 0x21E940u;
}
