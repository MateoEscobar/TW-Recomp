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

// Function: sub_0025E0E0
// Address: 0x25e0e0 - 0x25e250
void sub_0025E0E0_0x25e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E0E0_0x25e0e0");
#endif

    switch (ctx->pc) {
        case 0x25e0e0u: goto label_25e0e0;
        case 0x25e0e4u: goto label_25e0e4;
        case 0x25e0e8u: goto label_25e0e8;
        case 0x25e0ecu: goto label_25e0ec;
        case 0x25e0f0u: goto label_25e0f0;
        case 0x25e0f4u: goto label_25e0f4;
        case 0x25e0f8u: goto label_25e0f8;
        case 0x25e0fcu: goto label_25e0fc;
        case 0x25e100u: goto label_25e100;
        case 0x25e104u: goto label_25e104;
        case 0x25e108u: goto label_25e108;
        case 0x25e10cu: goto label_25e10c;
        case 0x25e110u: goto label_25e110;
        case 0x25e114u: goto label_25e114;
        case 0x25e118u: goto label_25e118;
        case 0x25e11cu: goto label_25e11c;
        case 0x25e120u: goto label_25e120;
        case 0x25e124u: goto label_25e124;
        case 0x25e128u: goto label_25e128;
        case 0x25e12cu: goto label_25e12c;
        case 0x25e130u: goto label_25e130;
        case 0x25e134u: goto label_25e134;
        case 0x25e138u: goto label_25e138;
        case 0x25e13cu: goto label_25e13c;
        case 0x25e140u: goto label_25e140;
        case 0x25e144u: goto label_25e144;
        case 0x25e148u: goto label_25e148;
        case 0x25e14cu: goto label_25e14c;
        case 0x25e150u: goto label_25e150;
        case 0x25e154u: goto label_25e154;
        case 0x25e158u: goto label_25e158;
        case 0x25e15cu: goto label_25e15c;
        case 0x25e160u: goto label_25e160;
        case 0x25e164u: goto label_25e164;
        case 0x25e168u: goto label_25e168;
        case 0x25e16cu: goto label_25e16c;
        case 0x25e170u: goto label_25e170;
        case 0x25e174u: goto label_25e174;
        case 0x25e178u: goto label_25e178;
        case 0x25e17cu: goto label_25e17c;
        case 0x25e180u: goto label_25e180;
        case 0x25e184u: goto label_25e184;
        case 0x25e188u: goto label_25e188;
        case 0x25e18cu: goto label_25e18c;
        case 0x25e190u: goto label_25e190;
        case 0x25e194u: goto label_25e194;
        case 0x25e198u: goto label_25e198;
        case 0x25e19cu: goto label_25e19c;
        case 0x25e1a0u: goto label_25e1a0;
        case 0x25e1a4u: goto label_25e1a4;
        case 0x25e1a8u: goto label_25e1a8;
        case 0x25e1acu: goto label_25e1ac;
        case 0x25e1b0u: goto label_25e1b0;
        case 0x25e1b4u: goto label_25e1b4;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1bcu: goto label_25e1bc;
        case 0x25e1c0u: goto label_25e1c0;
        case 0x25e1c4u: goto label_25e1c4;
        case 0x25e1c8u: goto label_25e1c8;
        case 0x25e1ccu: goto label_25e1cc;
        case 0x25e1d0u: goto label_25e1d0;
        case 0x25e1d4u: goto label_25e1d4;
        case 0x25e1d8u: goto label_25e1d8;
        case 0x25e1dcu: goto label_25e1dc;
        case 0x25e1e0u: goto label_25e1e0;
        case 0x25e1e4u: goto label_25e1e4;
        case 0x25e1e8u: goto label_25e1e8;
        case 0x25e1ecu: goto label_25e1ec;
        case 0x25e1f0u: goto label_25e1f0;
        case 0x25e1f4u: goto label_25e1f4;
        case 0x25e1f8u: goto label_25e1f8;
        case 0x25e1fcu: goto label_25e1fc;
        case 0x25e200u: goto label_25e200;
        case 0x25e204u: goto label_25e204;
        case 0x25e208u: goto label_25e208;
        case 0x25e20cu: goto label_25e20c;
        case 0x25e210u: goto label_25e210;
        case 0x25e214u: goto label_25e214;
        case 0x25e218u: goto label_25e218;
        case 0x25e21cu: goto label_25e21c;
        case 0x25e220u: goto label_25e220;
        case 0x25e224u: goto label_25e224;
        case 0x25e228u: goto label_25e228;
        case 0x25e22cu: goto label_25e22c;
        case 0x25e230u: goto label_25e230;
        case 0x25e234u: goto label_25e234;
        case 0x25e238u: goto label_25e238;
        case 0x25e23cu: goto label_25e23c;
        case 0x25e240u: goto label_25e240;
        case 0x25e244u: goto label_25e244;
        case 0x25e248u: goto label_25e248;
        case 0x25e24cu: goto label_25e24c;
        default: break;
    }

    ctx->pc = 0x25e0e0u;

label_25e0e0:
    // 0x25e0e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_25e0e4:
    // 0x25e0e4: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x25e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_25e0e8:
    // 0x25e0e8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x25e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_25e0ec:
    // 0x25e0ec: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x25e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_25e0f0:
    // 0x25e0f0: 0x2450d9f0  addiu       $s0, $v0, -0x2610
    ctx->pc = 0x25e0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957552));
label_25e0f4:
    // 0x25e0f4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x25e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25e0f8:
    // 0x25e0f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e0f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e0fc:
    // 0x25e0fc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x25e0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25e100:
    // 0x25e100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e104:
    // 0x25e104: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x25e104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_25e108:
    // 0x25e108: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25e108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_25e10c:
    // 0x25e10c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x25e10cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_25e110:
    // 0x25e110: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x25e110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_25e114:
    // 0x25e114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25e118:
    // 0x25e118: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x25e118u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25e11c:
    // 0x25e11c: 0xc041532  jal         func_1054C8
label_25e120:
    if (ctx->pc == 0x25E120u) {
        ctx->pc = 0x25E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E11Cu;
        // 0x25e120: 0x8e3500d4  lw          $s5, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E124u;
        goto label_25e124;
    }
    ctx->pc = 0x25E11Cu;
    SET_GPR_U32(ctx, 31, 0x25E124u);
    ctx->pc = 0x25E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E11Cu;
    // 0x25e120: 0x8e3500d4  lw          $s5, 0xD4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E11Cu, 0x25E124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E124u;
label_25e124:
    // 0x25e124: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25e124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e128:
    // 0x25e128: 0xc041532  jal         func_1054C8
label_25e12c:
    if (ctx->pc == 0x25E12Cu) {
        ctx->pc = 0x25E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E128u;
        // 0x25e12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E130u;
        goto label_25e130;
    }
    ctx->pc = 0x25E128u;
    SET_GPR_U32(ctx, 31, 0x25E130u);
    ctx->pc = 0x25E12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E128u;
    // 0x25e12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E128u, 0x25E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E130u;
label_25e130:
    // 0x25e130: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x25e130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e134:
    // 0x25e134: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_25e138:
    if (ctx->pc == 0x25E138u) {
        ctx->pc = 0x25E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E134u;
        // 0x25e138: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E13Cu;
        goto label_25e13c;
    }
    ctx->pc = 0x25E134u;
    {
        const bool branch_taken_0x25e134 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E134u;
        // 0x25e138: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e134) {
            ctx->pc = 0x25E154u;
            goto label_25e154;
        }
    }
    ctx->pc = 0x25E13Cu;
label_25e13c:
    // 0x25e13c: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25e13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25e140:
    // 0x25e140: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e144:
    // 0x25e144: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25e148:
    // 0x25e148: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25e148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e14c:
    // 0x25e14c: 0xc041b20  jal         func_106C80
label_25e150:
    if (ctx->pc == 0x25E150u) {
        ctx->pc = 0x25E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E14Cu;
        // 0x25e150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E154u;
        goto label_25e154;
    }
    ctx->pc = 0x25E14Cu;
    SET_GPR_U32(ctx, 31, 0x25E154u);
    ctx->pc = 0x25E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E14Cu;
    // 0x25e150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25E14Cu, 0x25E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E154u;
label_25e154:
    // 0x25e154: 0xc05d484  jal         func_175210
label_25e158:
    if (ctx->pc == 0x25E158u) {
        ctx->pc = 0x25E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E154u;
        // 0x25e158: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E15Cu;
        goto label_25e15c;
    }
    ctx->pc = 0x25E154u;
    SET_GPR_U32(ctx, 31, 0x25E15Cu);
    ctx->pc = 0x25E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E154u;
    // 0x25e158: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25E154u, 0x25E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E15Cu;
label_25e15c:
    // 0x25e15c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e160:
    // 0x25e160: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25e160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25e164:
    // 0x25e164: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25e164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25e168:
    // 0x25e168: 0xa0f809  jalr        $a1
label_25e16c:
    if (ctx->pc == 0x25E16Cu) {
        ctx->pc = 0x25E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E168u;
        // 0x25e16c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E170u;
        goto label_25e170;
    }
    ctx->pc = 0x25E168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25E170u);
        ctx->pc = 0x25E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E168u;
        // 0x25e16c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E168u, 0x25E170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E170u;
label_25e170:
    // 0x25e170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e174:
    // 0x25e174: 0xc087016  jal         func_21C058
label_25e178:
    if (ctx->pc == 0x25E178u) {
        ctx->pc = 0x25E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E174u;
        // 0x25e178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E17Cu;
        goto label_25e17c;
    }
    ctx->pc = 0x25E174u;
    SET_GPR_U32(ctx, 31, 0x25E17Cu);
    ctx->pc = 0x25E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E174u;
    // 0x25e178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25E174u, 0x25E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E17Cu;
label_25e17c:
    // 0x25e17c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_25e180:
    if (ctx->pc == 0x25E180u) {
        ctx->pc = 0x25E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E17Cu;
        // 0x25e180: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E184u;
        goto label_25e184;
    }
    ctx->pc = 0x25E17Cu;
    {
        const bool branch_taken_0x25e17c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E17Cu;
        // 0x25e180: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e17c) {
            ctx->pc = 0x25E19Cu;
            goto label_25e19c;
        }
    }
    ctx->pc = 0x25E184u;
label_25e184:
    // 0x25e184: 0x8ea60088  lw          $a2, 0x88($s5)
    ctx->pc = 0x25e184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_25e188:
    // 0x25e188: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e18c:
    // 0x25e18c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e190:
    // 0x25e190: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25e190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e194:
    // 0x25e194: 0xc04159e  jal         func_105678
label_25e198:
    if (ctx->pc == 0x25E198u) {
        ctx->pc = 0x25E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E194u;
        // 0x25e198: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E19Cu;
        goto label_25e19c;
    }
    ctx->pc = 0x25E194u;
    SET_GPR_U32(ctx, 31, 0x25E19Cu);
    ctx->pc = 0x25E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E194u;
    // 0x25e198: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25E194u, 0x25E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E19Cu;
label_25e19c:
    // 0x25e19c: 0x16c0001c  bnez        $s6, . + 4 + (0x1C << 2)
label_25e1a0:
    if (ctx->pc == 0x25E1A0u) {
        ctx->pc = 0x25E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E19Cu;
        // 0x25e1a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1A4u;
        goto label_25e1a4;
    }
    ctx->pc = 0x25E19Cu;
    {
        const bool branch_taken_0x25e19c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E19Cu;
        // 0x25e1a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e19c) {
            ctx->pc = 0x25E210u;
            goto label_25e210;
        }
    }
    ctx->pc = 0x25E1A4u;
label_25e1a4:
    // 0x25e1a4: 0xc041532  jal         func_1054C8
label_25e1a8:
    if (ctx->pc == 0x25E1A8u) {
        ctx->pc = 0x25E1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1A4u;
        // 0x25e1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1ACu;
        goto label_25e1ac;
    }
    ctx->pc = 0x25E1A4u;
    SET_GPR_U32(ctx, 31, 0x25E1ACu);
    ctx->pc = 0x25E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1A4u;
    // 0x25e1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E1A4u, 0x25E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1ACu;
label_25e1ac:
    // 0x25e1ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e1b0:
    // 0x25e1b0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_25e1b4:
    if (ctx->pc == 0x25E1B4u) {
        ctx->pc = 0x25E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1B0u;
        // 0x25e1b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1B8u;
        goto label_25e1b8;
    }
    ctx->pc = 0x25E1B0u;
    {
        const bool branch_taken_0x25e1b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1B0u;
        // 0x25e1b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e1b0) {
            ctx->pc = 0x25E1F4u;
            goto label_25e1f4;
        }
    }
    ctx->pc = 0x25E1B8u;
label_25e1b8:
    // 0x25e1b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25e1bc:
    // 0x25e1bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25e1bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25e1c0:
    // 0x25e1c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25e1c4:
    // 0x25e1c4: 0x40f809  jalr        $v0
label_25e1c8:
    if (ctx->pc == 0x25E1C8u) {
        ctx->pc = 0x25E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1C4u;
        // 0x25e1c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1CCu;
        goto label_25e1cc;
    }
    ctx->pc = 0x25E1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25E1CCu);
        ctx->pc = 0x25E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1C4u;
        // 0x25e1c8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E1C4u, 0x25E1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E1CCu;
label_25e1cc:
    // 0x25e1cc: 0x8ea6007c  lw          $a2, 0x7C($s5)
    ctx->pc = 0x25e1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_25e1d0:
    // 0x25e1d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25e1d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25e1d4:
    // 0x25e1d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25e1d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e1d8:
    // 0x25e1d8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25e1d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e1dc:
    // 0x25e1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e1e0:
    // 0x25e1e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25e1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e1e4:
    // 0x25e1e4: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x25e1e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
label_25e1e8:
    // 0x25e1e8: 0xc041664  jal         func_105990
label_25e1ec:
    if (ctx->pc == 0x25E1ECu) {
        ctx->pc = 0x25E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1E8u;
        // 0x25e1ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1F0u;
        goto label_25e1f0;
    }
    ctx->pc = 0x25E1E8u;
    SET_GPR_U32(ctx, 31, 0x25E1F0u);
    ctx->pc = 0x25E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1E8u;
    // 0x25e1ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25E1E8u, 0x25E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1F0u;
label_25e1f0:
    // 0x25e1f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25e1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e1f4:
    // 0x25e1f4: 0xc05d53a  jal         func_1754E8
label_25e1f8:
    if (ctx->pc == 0x25E1F8u) {
        ctx->pc = 0x25E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E1F4u;
        // 0x25e1f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E1FCu;
        goto label_25e1fc;
    }
    ctx->pc = 0x25E1F4u;
    SET_GPR_U32(ctx, 31, 0x25E1FCu);
    ctx->pc = 0x25E1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E1F4u;
    // 0x25e1f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25E1F4u, 0x25E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1FCu;
label_25e1fc:
    // 0x25e1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e200:
    // 0x25e200: 0xc089990  jal         func_226640
label_25e204:
    if (ctx->pc == 0x25E204u) {
        ctx->pc = 0x25E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E200u;
        // 0x25e204: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E208u;
        goto label_25e208;
    }
    ctx->pc = 0x25E200u;
    SET_GPR_U32(ctx, 31, 0x25E208u);
    ctx->pc = 0x25E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E200u;
    // 0x25e204: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25E200u, 0x25E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E208u;
label_25e208:
    // 0x25e208: 0x10000004  b           . + 4 + (0x4 << 2)
label_25e20c:
    if (ctx->pc == 0x25E20Cu) {
        ctx->pc = 0x25E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E208u;
        // 0x25e20c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E210u;
        goto label_25e210;
    }
    ctx->pc = 0x25E208u;
    {
        const bool branch_taken_0x25e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E208u;
        // 0x25e20c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e208) {
            ctx->pc = 0x25E21Cu;
            goto label_25e21c;
        }
    }
    ctx->pc = 0x25E210u;
label_25e210:
    // 0x25e210: 0xc05d53a  jal         func_1754E8
label_25e214:
    if (ctx->pc == 0x25E214u) {
        ctx->pc = 0x25E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E210u;
        // 0x25e214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E218u;
        goto label_25e218;
    }
    ctx->pc = 0x25E210u;
    SET_GPR_U32(ctx, 31, 0x25E218u);
    ctx->pc = 0x25E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E210u;
    // 0x25e214: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25E210u, 0x25E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E218u;
label_25e218:
    // 0x25e218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25e218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25e21c:
    // 0x25e21c: 0xc05d4f6  jal         func_1753D8
label_25e220:
    if (ctx->pc == 0x25E220u) {
        ctx->pc = 0x25E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E21Cu;
        // 0x25e220: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E224u;
        goto label_25e224;
    }
    ctx->pc = 0x25E21Cu;
    SET_GPR_U32(ctx, 31, 0x25E224u);
    ctx->pc = 0x25E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E21Cu;
    // 0x25e220: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25E21Cu, 0x25E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E224u;
label_25e224:
    // 0x25e224: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x25e224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25e228:
    // 0x25e228: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x25e228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25e22c:
    // 0x25e22c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x25e22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25e230:
    // 0x25e230: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x25e230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25e234:
    // 0x25e234: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x25e234u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25e238:
    // 0x25e238: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x25e238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e23c:
    // 0x25e23c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x25e23cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e240:
    // 0x25e240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e244:
    // 0x25e244: 0x3e00008  jr          $ra
label_25e248:
    if (ctx->pc == 0x25E248u) {
        ctx->pc = 0x25E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E244u;
        // 0x25e248: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E24Cu;
        goto label_25e24c;
    }
    ctx->pc = 0x25E244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E244u;
        // 0x25e248: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E24Cu;
label_25e24c:
    // 0x25e24c: 0x0  nop
    ctx->pc = 0x25e24cu;
    // NOP
    ctx->pc = 0x25e250u;
}
