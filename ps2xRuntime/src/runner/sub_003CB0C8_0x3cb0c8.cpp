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

// Function: sub_003CB0C8
// Address: 0x3cb0c8 - 0x3cb220
void sub_003CB0C8_0x3cb0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB0C8_0x3cb0c8");
#endif

    switch (ctx->pc) {
        case 0x3cb0c8u: goto label_3cb0c8;
        case 0x3cb0ccu: goto label_3cb0cc;
        case 0x3cb0d0u: goto label_3cb0d0;
        case 0x3cb0d4u: goto label_3cb0d4;
        case 0x3cb0d8u: goto label_3cb0d8;
        case 0x3cb0dcu: goto label_3cb0dc;
        case 0x3cb0e0u: goto label_3cb0e0;
        case 0x3cb0e4u: goto label_3cb0e4;
        case 0x3cb0e8u: goto label_3cb0e8;
        case 0x3cb0ecu: goto label_3cb0ec;
        case 0x3cb0f0u: goto label_3cb0f0;
        case 0x3cb0f4u: goto label_3cb0f4;
        case 0x3cb0f8u: goto label_3cb0f8;
        case 0x3cb0fcu: goto label_3cb0fc;
        case 0x3cb100u: goto label_3cb100;
        case 0x3cb104u: goto label_3cb104;
        case 0x3cb108u: goto label_3cb108;
        case 0x3cb10cu: goto label_3cb10c;
        case 0x3cb110u: goto label_3cb110;
        case 0x3cb114u: goto label_3cb114;
        case 0x3cb118u: goto label_3cb118;
        case 0x3cb11cu: goto label_3cb11c;
        case 0x3cb120u: goto label_3cb120;
        case 0x3cb124u: goto label_3cb124;
        case 0x3cb128u: goto label_3cb128;
        case 0x3cb12cu: goto label_3cb12c;
        case 0x3cb130u: goto label_3cb130;
        case 0x3cb134u: goto label_3cb134;
        case 0x3cb138u: goto label_3cb138;
        case 0x3cb13cu: goto label_3cb13c;
        case 0x3cb140u: goto label_3cb140;
        case 0x3cb144u: goto label_3cb144;
        case 0x3cb148u: goto label_3cb148;
        case 0x3cb14cu: goto label_3cb14c;
        case 0x3cb150u: goto label_3cb150;
        case 0x3cb154u: goto label_3cb154;
        case 0x3cb158u: goto label_3cb158;
        case 0x3cb15cu: goto label_3cb15c;
        case 0x3cb160u: goto label_3cb160;
        case 0x3cb164u: goto label_3cb164;
        case 0x3cb168u: goto label_3cb168;
        case 0x3cb16cu: goto label_3cb16c;
        case 0x3cb170u: goto label_3cb170;
        case 0x3cb174u: goto label_3cb174;
        case 0x3cb178u: goto label_3cb178;
        case 0x3cb17cu: goto label_3cb17c;
        case 0x3cb180u: goto label_3cb180;
        case 0x3cb184u: goto label_3cb184;
        case 0x3cb188u: goto label_3cb188;
        case 0x3cb18cu: goto label_3cb18c;
        case 0x3cb190u: goto label_3cb190;
        case 0x3cb194u: goto label_3cb194;
        case 0x3cb198u: goto label_3cb198;
        case 0x3cb19cu: goto label_3cb19c;
        case 0x3cb1a0u: goto label_3cb1a0;
        case 0x3cb1a4u: goto label_3cb1a4;
        case 0x3cb1a8u: goto label_3cb1a8;
        case 0x3cb1acu: goto label_3cb1ac;
        case 0x3cb1b0u: goto label_3cb1b0;
        case 0x3cb1b4u: goto label_3cb1b4;
        case 0x3cb1b8u: goto label_3cb1b8;
        case 0x3cb1bcu: goto label_3cb1bc;
        case 0x3cb1c0u: goto label_3cb1c0;
        case 0x3cb1c4u: goto label_3cb1c4;
        case 0x3cb1c8u: goto label_3cb1c8;
        case 0x3cb1ccu: goto label_3cb1cc;
        case 0x3cb1d0u: goto label_3cb1d0;
        case 0x3cb1d4u: goto label_3cb1d4;
        case 0x3cb1d8u: goto label_3cb1d8;
        case 0x3cb1dcu: goto label_3cb1dc;
        case 0x3cb1e0u: goto label_3cb1e0;
        case 0x3cb1e4u: goto label_3cb1e4;
        case 0x3cb1e8u: goto label_3cb1e8;
        case 0x3cb1ecu: goto label_3cb1ec;
        case 0x3cb1f0u: goto label_3cb1f0;
        case 0x3cb1f4u: goto label_3cb1f4;
        case 0x3cb1f8u: goto label_3cb1f8;
        case 0x3cb1fcu: goto label_3cb1fc;
        case 0x3cb200u: goto label_3cb200;
        case 0x3cb204u: goto label_3cb204;
        case 0x3cb208u: goto label_3cb208;
        case 0x3cb20cu: goto label_3cb20c;
        case 0x3cb210u: goto label_3cb210;
        case 0x3cb214u: goto label_3cb214;
        case 0x3cb218u: goto label_3cb218;
        case 0x3cb21cu: goto label_3cb21c;
        default: break;
    }

    ctx->pc = 0x3cb0c8u;

label_3cb0c8:
    // 0x3cb0c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cb0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3cb0cc:
    // 0x3cb0cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3cb0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3cb0d0:
    // 0x3cb0d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3cb0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3cb0d4:
    // 0x3cb0d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cb0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cb0d8:
    // 0x3cb0d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3cb0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3cb0dc:
    // 0x3cb0dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cb0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cb0e0:
    // 0x3cb0e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cb0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3cb0e4:
    // 0x3cb0e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cb0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cb0e8:
    // 0x3cb0e8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3cb0e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb0ec:
    // 0x3cb0ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3cb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb0f0:
    // 0x3cb0f0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cb0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cb0f4:
    // 0x3cb0f4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cb0f8:
    // 0x3cb0f8: 0x40f809  jalr        $v0
label_3cb0fc:
    if (ctx->pc == 0x3CB0FCu) {
        ctx->pc = 0x3CB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0F8u;
        // 0x3cb0fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB100u;
        goto label_3cb100;
    }
    ctx->pc = 0x3CB0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CB100u);
        ctx->pc = 0x3CB0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0F8u;
        // 0x3cb0fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB0F8u, 0x3CB100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB100u;
label_3cb100:
    // 0x3cb100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cb100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb104:
    // 0x3cb104: 0xc0ea14c  jal         func_3A8530
label_3cb108:
    if (ctx->pc == 0x3CB108u) {
        ctx->pc = 0x3CB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB104u;
        // 0x3cb108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB10Cu;
        goto label_3cb10c;
    }
    ctx->pc = 0x3CB104u;
    SET_GPR_U32(ctx, 31, 0x3CB10Cu);
    ctx->pc = 0x3CB108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB104u;
    // 0x3cb108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CB104u, 0x3CB10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB10Cu;
label_3cb10c:
    // 0x3cb10c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cb110:
    // 0x3cb110: 0xc0ea12a  jal         func_3A84A8
label_3cb114:
    if (ctx->pc == 0x3CB114u) {
        ctx->pc = 0x3CB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB110u;
        // 0x3cb114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB118u;
        goto label_3cb118;
    }
    ctx->pc = 0x3CB110u;
    SET_GPR_U32(ctx, 31, 0x3CB118u);
    ctx->pc = 0x3CB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB110u;
    // 0x3cb114: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CB110u, 0x3CB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB118u;
label_3cb118:
    // 0x3cb118: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cb118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb11c:
    // 0x3cb11c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cb11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cb120:
    // 0x3cb120: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cb120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cb124:
    // 0x3cb124: 0xc0ea12a  jal         func_3A84A8
label_3cb128:
    if (ctx->pc == 0x3CB128u) {
        ctx->pc = 0x3CB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB124u;
        // 0x3cb128: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB12Cu;
        goto label_3cb12c;
    }
    ctx->pc = 0x3CB124u;
    SET_GPR_U32(ctx, 31, 0x3CB12Cu);
    ctx->pc = 0x3CB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB124u;
    // 0x3cb128: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CB124u, 0x3CB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB12Cu;
label_3cb12c:
    // 0x3cb12c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cb12cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb130:
    // 0x3cb130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cb130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb134:
    // 0x3cb134: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3cb134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3cb138:
    // 0x3cb138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb13c:
    // 0x3cb13c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3cb13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3cb140:
    // 0x3cb140: 0xae330054  sw          $s3, 0x54($s1)
    ctx->pc = 0x3cb140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 19));
label_3cb144:
    // 0x3cb144: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3cb144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3cb148:
    // 0x3cb148: 0xc0e858c  jal         func_3A1630
label_3cb14c:
    if (ctx->pc == 0x3CB14Cu) {
        ctx->pc = 0x3CB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB148u;
        // 0x3cb14c: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB150u;
        goto label_3cb150;
    }
    ctx->pc = 0x3CB148u;
    SET_GPR_U32(ctx, 31, 0x3CB150u);
    ctx->pc = 0x3CB14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB148u;
    // 0x3cb14c: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CB148u, 0x3CB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB150u;
label_3cb150:
    // 0x3cb150: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x3cb150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3cb154:
    // 0x3cb154: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3cb154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3cb158:
    // 0x3cb158: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3cb158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_3cb15c:
    // 0x3cb15c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x3cb15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
label_3cb160:
    // 0x3cb160: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3cb160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cb164:
    // 0x3cb164: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3cb164u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cb168:
    // 0x3cb168: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3cb168u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3cb16c:
    // 0x3cb16c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3cb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cb170:
    // 0x3cb170: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3cb170u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3cb174:
    // 0x3cb174: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3cb174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3cb178:
    // 0x3cb178: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3cb178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3cb17c:
    // 0x3cb17c: 0x60f809  jalr        $v1
label_3cb180:
    if (ctx->pc == 0x3CB180u) {
        ctx->pc = 0x3CB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB17Cu;
        // 0x3cb180: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB184u;
        goto label_3cb184;
    }
    ctx->pc = 0x3CB17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CB184u);
        ctx->pc = 0x3CB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB17Cu;
        // 0x3cb180: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB17Cu, 0x3CB184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CB184u;
label_3cb184:
    // 0x3cb184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cb184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cb188:
    // 0x3cb188: 0xc0e9132  jal         func_3A44C8
label_3cb18c:
    if (ctx->pc == 0x3CB18Cu) {
        ctx->pc = 0x3CB18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB188u;
        // 0x3cb18c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB190u;
        goto label_3cb190;
    }
    ctx->pc = 0x3CB188u;
    SET_GPR_U32(ctx, 31, 0x3CB190u);
    ctx->pc = 0x3CB18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB188u;
    // 0x3cb18c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3CB188u, 0x3CB190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB190u;
label_3cb190:
    // 0x3cb190: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3cb190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3cb194:
    // 0x3cb194: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cb194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cb198:
    // 0x3cb198: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3cb198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3cb19c:
    // 0x3cb19c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3cb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3cb1a0:
    // 0x3cb1a0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3cb1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3cb1a4:
    // 0x3cb1a4: 0xc1073cc  jal         func_41CF30
label_3cb1a8:
    if (ctx->pc == 0x3CB1A8u) {
        ctx->pc = 0x3CB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1A4u;
        // 0x3cb1a8: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1ACu;
        goto label_3cb1ac;
    }
    ctx->pc = 0x3CB1A4u;
    SET_GPR_U32(ctx, 31, 0x3CB1ACu);
    ctx->pc = 0x3CB1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1A4u;
    // 0x3cb1a8: 0xae400008  sw          $zero, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3CB1A4u, 0x3CB1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1ACu;
label_3cb1ac:
    // 0x3cb1ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cb1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb1b0:
    // 0x3cb1b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3cb1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_3cb1b4:
    // 0x3cb1b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3cb1b8:
    if (ctx->pc == 0x3CB1B8u) {
        ctx->pc = 0x3CB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1B4u;
        // 0x3cb1b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1BCu;
        goto label_3cb1bc;
    }
    ctx->pc = 0x3CB1B4u;
    {
        const bool branch_taken_0x3cb1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1B4u;
        // 0x3cb1b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1b4) {
            ctx->pc = 0x3CB1D0u;
            goto label_3cb1d0;
        }
    }
    ctx->pc = 0x3CB1BCu;
label_3cb1bc:
    // 0x3cb1bc: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x3cb1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
label_3cb1c0:
    // 0x3cb1c0: 0xc0e91f0  jal         func_3A47C0
label_3cb1c4:
    if (ctx->pc == 0x3CB1C4u) {
        ctx->pc = 0x3CB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1C0u;
        // 0x3cb1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1C8u;
        goto label_3cb1c8;
    }
    ctx->pc = 0x3CB1C0u;
    SET_GPR_U32(ctx, 31, 0x3CB1C8u);
    ctx->pc = 0x3CB1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1C0u;
    // 0x3cb1c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3CB1C0u, 0x3CB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1C8u;
label_3cb1c8:
    // 0x3cb1c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3cb1cc:
    if (ctx->pc == 0x3CB1CCu) {
        ctx->pc = 0x3CB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1C8u;
        // 0x3cb1cc: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1D0u;
        goto label_3cb1d0;
    }
    ctx->pc = 0x3CB1C8u;
    {
        const bool branch_taken_0x3cb1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1C8u;
        // 0x3cb1cc: 0x32020008  andi        $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1c8) {
            ctx->pc = 0x3CB1E0u;
            goto label_3cb1e0;
        }
    }
    ctx->pc = 0x3CB1D0u;
label_3cb1d0:
    // 0x3cb1d0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3cb1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3cb1d4:
    // 0x3cb1d4: 0xc0e91f0  jal         func_3A47C0
label_3cb1d8:
    if (ctx->pc == 0x3CB1D8u) {
        ctx->pc = 0x3CB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1D4u;
        // 0x3cb1d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1DCu;
        goto label_3cb1dc;
    }
    ctx->pc = 0x3CB1D4u;
    SET_GPR_U32(ctx, 31, 0x3CB1DCu);
    ctx->pc = 0x3CB1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1D4u;
    // 0x3cb1d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3CB1D4u, 0x3CB1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1DCu;
label_3cb1dc:
    // 0x3cb1dc: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x3cb1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
label_3cb1e0:
    // 0x3cb1e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3cb1e4:
    if (ctx->pc == 0x3CB1E4u) {
        ctx->pc = 0x3CB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1E0u;
        // 0x3cb1e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1E8u;
        goto label_3cb1e8;
    }
    ctx->pc = 0x3CB1E0u;
    {
        const bool branch_taken_0x3cb1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1E0u;
        // 0x3cb1e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1e0) {
            ctx->pc = 0x3CB204u;
            goto label_3cb204;
        }
    }
    ctx->pc = 0x3CB1E8u;
label_3cb1e8:
    // 0x3cb1e8: 0x8e240118  lw          $a0, 0x118($s1)
    ctx->pc = 0x3cb1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_3cb1ec:
    // 0x3cb1ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3cb1f0:
    if (ctx->pc == 0x3CB1F0u) {
        ctx->pc = 0x3CB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1ECu;
        // 0x3cb1f0: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1F4u;
        goto label_3cb1f4;
    }
    ctx->pc = 0x3CB1ECu;
    {
        const bool branch_taken_0x3cb1ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1ECu;
        // 0x3cb1f0: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1ec) {
            ctx->pc = 0x3CB204u;
            goto label_3cb204;
        }
    }
    ctx->pc = 0x3CB1F4u;
label_3cb1f4:
    // 0x3cb1f4: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x3cb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3cb1f8:
    // 0x3cb1f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3cb1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3cb1fc:
    // 0x3cb1fc: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3cb1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_3cb200:
    // 0x3cb200: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3cb200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cb204:
    // 0x3cb204: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3cb204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cb208:
    // 0x3cb208: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3cb208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cb20c:
    // 0x3cb20c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3cb20cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cb210:
    // 0x3cb210: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cb210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cb214:
    // 0x3cb214: 0x3e00008  jr          $ra
label_3cb218:
    if (ctx->pc == 0x3CB218u) {
        ctx->pc = 0x3CB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB214u;
        // 0x3cb218: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB21Cu;
        goto label_3cb21c;
    }
    ctx->pc = 0x3CB214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB214u;
        // 0x3cb218: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CB21Cu;
label_3cb21c:
    // 0x3cb21c: 0x0  nop
    ctx->pc = 0x3cb21cu;
    // NOP
    ctx->pc = 0x3cb220u;
}
