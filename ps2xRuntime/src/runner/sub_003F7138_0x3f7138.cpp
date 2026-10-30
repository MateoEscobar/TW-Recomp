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

// Function: sub_003F7138
// Address: 0x3f7138 - 0x3f72c8
void sub_003F7138_0x3f7138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7138_0x3f7138");
#endif

    switch (ctx->pc) {
        case 0x3f7138u: goto label_3f7138;
        case 0x3f713cu: goto label_3f713c;
        case 0x3f7140u: goto label_3f7140;
        case 0x3f7144u: goto label_3f7144;
        case 0x3f7148u: goto label_3f7148;
        case 0x3f714cu: goto label_3f714c;
        case 0x3f7150u: goto label_3f7150;
        case 0x3f7154u: goto label_3f7154;
        case 0x3f7158u: goto label_3f7158;
        case 0x3f715cu: goto label_3f715c;
        case 0x3f7160u: goto label_3f7160;
        case 0x3f7164u: goto label_3f7164;
        case 0x3f7168u: goto label_3f7168;
        case 0x3f716cu: goto label_3f716c;
        case 0x3f7170u: goto label_3f7170;
        case 0x3f7174u: goto label_3f7174;
        case 0x3f7178u: goto label_3f7178;
        case 0x3f717cu: goto label_3f717c;
        case 0x3f7180u: goto label_3f7180;
        case 0x3f7184u: goto label_3f7184;
        case 0x3f7188u: goto label_3f7188;
        case 0x3f718cu: goto label_3f718c;
        case 0x3f7190u: goto label_3f7190;
        case 0x3f7194u: goto label_3f7194;
        case 0x3f7198u: goto label_3f7198;
        case 0x3f719cu: goto label_3f719c;
        case 0x3f71a0u: goto label_3f71a0;
        case 0x3f71a4u: goto label_3f71a4;
        case 0x3f71a8u: goto label_3f71a8;
        case 0x3f71acu: goto label_3f71ac;
        case 0x3f71b0u: goto label_3f71b0;
        case 0x3f71b4u: goto label_3f71b4;
        case 0x3f71b8u: goto label_3f71b8;
        case 0x3f71bcu: goto label_3f71bc;
        case 0x3f71c0u: goto label_3f71c0;
        case 0x3f71c4u: goto label_3f71c4;
        case 0x3f71c8u: goto label_3f71c8;
        case 0x3f71ccu: goto label_3f71cc;
        case 0x3f71d0u: goto label_3f71d0;
        case 0x3f71d4u: goto label_3f71d4;
        case 0x3f71d8u: goto label_3f71d8;
        case 0x3f71dcu: goto label_3f71dc;
        case 0x3f71e0u: goto label_3f71e0;
        case 0x3f71e4u: goto label_3f71e4;
        case 0x3f71e8u: goto label_3f71e8;
        case 0x3f71ecu: goto label_3f71ec;
        case 0x3f71f0u: goto label_3f71f0;
        case 0x3f71f4u: goto label_3f71f4;
        case 0x3f71f8u: goto label_3f71f8;
        case 0x3f71fcu: goto label_3f71fc;
        case 0x3f7200u: goto label_3f7200;
        case 0x3f7204u: goto label_3f7204;
        case 0x3f7208u: goto label_3f7208;
        case 0x3f720cu: goto label_3f720c;
        case 0x3f7210u: goto label_3f7210;
        case 0x3f7214u: goto label_3f7214;
        case 0x3f7218u: goto label_3f7218;
        case 0x3f721cu: goto label_3f721c;
        case 0x3f7220u: goto label_3f7220;
        case 0x3f7224u: goto label_3f7224;
        case 0x3f7228u: goto label_3f7228;
        case 0x3f722cu: goto label_3f722c;
        case 0x3f7230u: goto label_3f7230;
        case 0x3f7234u: goto label_3f7234;
        case 0x3f7238u: goto label_3f7238;
        case 0x3f723cu: goto label_3f723c;
        case 0x3f7240u: goto label_3f7240;
        case 0x3f7244u: goto label_3f7244;
        case 0x3f7248u: goto label_3f7248;
        case 0x3f724cu: goto label_3f724c;
        case 0x3f7250u: goto label_3f7250;
        case 0x3f7254u: goto label_3f7254;
        case 0x3f7258u: goto label_3f7258;
        case 0x3f725cu: goto label_3f725c;
        case 0x3f7260u: goto label_3f7260;
        case 0x3f7264u: goto label_3f7264;
        case 0x3f7268u: goto label_3f7268;
        case 0x3f726cu: goto label_3f726c;
        case 0x3f7270u: goto label_3f7270;
        case 0x3f7274u: goto label_3f7274;
        case 0x3f7278u: goto label_3f7278;
        case 0x3f727cu: goto label_3f727c;
        case 0x3f7280u: goto label_3f7280;
        case 0x3f7284u: goto label_3f7284;
        case 0x3f7288u: goto label_3f7288;
        case 0x3f728cu: goto label_3f728c;
        case 0x3f7290u: goto label_3f7290;
        case 0x3f7294u: goto label_3f7294;
        case 0x3f7298u: goto label_3f7298;
        case 0x3f729cu: goto label_3f729c;
        case 0x3f72a0u: goto label_3f72a0;
        case 0x3f72a4u: goto label_3f72a4;
        case 0x3f72a8u: goto label_3f72a8;
        case 0x3f72acu: goto label_3f72ac;
        case 0x3f72b0u: goto label_3f72b0;
        case 0x3f72b4u: goto label_3f72b4;
        case 0x3f72b8u: goto label_3f72b8;
        case 0x3f72bcu: goto label_3f72bc;
        case 0x3f72c0u: goto label_3f72c0;
        case 0x3f72c4u: goto label_3f72c4;
        default: break;
    }

    ctx->pc = 0x3f7138u;

label_3f7138:
    // 0x3f7138: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3f7138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3f713c:
    // 0x3f713c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3f713cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3f7140:
    // 0x3f7140: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3f7140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3f7144:
    // 0x3f7144: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f7144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f7148:
    // 0x3f7148: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3f7148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3f714c:
    // 0x3f714c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3f714cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3f7150:
    // 0x3f7150: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f7150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7154:
    // 0x3f7154: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3f7154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3f7158:
    // 0x3f7158: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f7158u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f715c:
    // 0x3f715c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f715cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f7160:
    // 0x3f7160: 0x40f809  jalr        $v0
label_3f7164:
    if (ctx->pc == 0x3F7164u) {
        ctx->pc = 0x3F7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7160u;
        // 0x3f7164: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7168u;
        goto label_3f7168;
    }
    ctx->pc = 0x3F7160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F7168u);
        ctx->pc = 0x3F7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7160u;
        // 0x3f7164: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7160u, 0x3F7168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F7168u;
label_3f7168:
    // 0x3f7168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f7168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f716c:
    // 0x3f716c: 0xc0ea14c  jal         func_3A8530
label_3f7170:
    if (ctx->pc == 0x3F7170u) {
        ctx->pc = 0x3F7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F716Cu;
        // 0x3f7170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7174u;
        goto label_3f7174;
    }
    ctx->pc = 0x3F716Cu;
    SET_GPR_U32(ctx, 31, 0x3F7174u);
    ctx->pc = 0x3F7170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F716Cu;
    // 0x3f7170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F716Cu, 0x3F7174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7174u;
label_3f7174:
    // 0x3f7174: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f7174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f7178:
    // 0x3f7178: 0xc0ea12a  jal         func_3A84A8
label_3f717c:
    if (ctx->pc == 0x3F717Cu) {
        ctx->pc = 0x3F717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7178u;
        // 0x3f717c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7180u;
        goto label_3f7180;
    }
    ctx->pc = 0x3F7178u;
    SET_GPR_U32(ctx, 31, 0x3F7180u);
    ctx->pc = 0x3F717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7178u;
    // 0x3f717c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F7178u, 0x3F7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7180u;
label_3f7180:
    // 0x3f7180: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f7180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7184:
    // 0x3f7184: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f7184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f7188:
    // 0x3f7188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f7188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f718c:
    // 0x3f718c: 0xc0ea12a  jal         func_3A84A8
label_3f7190:
    if (ctx->pc == 0x3F7190u) {
        ctx->pc = 0x3F7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F718Cu;
        // 0x3f7190: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7194u;
        goto label_3f7194;
    }
    ctx->pc = 0x3F718Cu;
    SET_GPR_U32(ctx, 31, 0x3F7194u);
    ctx->pc = 0x3F7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F718Cu;
    // 0x3f7190: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F718Cu, 0x3F7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7194u;
label_3f7194:
    // 0x3f7194: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f7194u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7198:
    // 0x3f7198: 0x24020404  addiu       $v0, $zero, 0x404
    ctx->pc = 0x3f7198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3f719c:
    // 0x3f719c: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3f719cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3f71a0:
    // 0x3f71a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f71a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f71a4:
    // 0x3f71a4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f71a8:
    // 0x3f71a8: 0xc0e858c  jal         func_3A1630
label_3f71ac:
    if (ctx->pc == 0x3F71ACu) {
        ctx->pc = 0x3F71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F71A8u;
        // 0x3f71ac: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F71B0u;
        goto label_3f71b0;
    }
    ctx->pc = 0x3F71A8u;
    SET_GPR_U32(ctx, 31, 0x3F71B0u);
    ctx->pc = 0x3F71ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F71A8u;
    // 0x3f71ac: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F71A8u, 0x3F71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F71B0u;
label_3f71b0:
    // 0x3f71b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3f71b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3f71b4:
    // 0x3f71b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f71b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f71b8:
    // 0x3f71b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f71b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f71bc:
    // 0x3f71bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f71bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f71c0:
    // 0x3f71c0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3f71c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f71c4:
    // 0x3f71c4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3f71c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3f71c8:
    // 0x3f71c8: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x3f71c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3f71cc:
    // 0x3f71cc: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3f71ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3f71d0:
    // 0x3f71d0: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3f71d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_3f71d4:
    // 0x3f71d4: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3f71d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f71d8:
    // 0x3f71d8: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3f71d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f71dc:
    // 0x3f71dc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3f71dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3f71e0:
    // 0x3f71e0: 0x7e440010  sq          $a0, 0x10($s2)
    ctx->pc = 0x3f71e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 4));
label_3f71e4:
    // 0x3f71e4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3f71e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3f71e8:
    // 0x3f71e8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3f71e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3f71ec:
    // 0x3f71ec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3f71ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3f71f0:
    // 0x3f71f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3f71f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3f71f4:
    // 0x3f71f4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3f71f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f71f8:
    // 0x3f71f8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3f71f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f71fc:
    // 0x3f71fc: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3f71fcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f7200:
    // 0x3f7200: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3f7200u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f7204:
    // 0x3f7204: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3f7204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f7208:
    // 0x3f7208: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3f7208u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3f720c:
    // 0x3f720c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3f720cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f7210:
    // 0x3f7210: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3f7210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3f7214:
    // 0x3f7214: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3f7214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3f7218:
    // 0x3f7218: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3f7218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f721c:
    // 0x3f721c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3f721cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3f7220:
    // 0x3f7220: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3f7220u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3f7224:
    // 0x3f7224: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3f7224u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f7228:
    // 0x3f7228: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3f7228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3f722c:
    // 0x3f722c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3f722cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3f7230:
    // 0x3f7230: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f7230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f7234:
    // 0x3f7234: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3f7234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3f7238:
    // 0x3f7238: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3f7238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3f723c:
    // 0x3f723c: 0x3463ff54  ori         $v1, $v1, 0xFF54
    ctx->pc = 0x3f723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65364);
label_3f7240:
    // 0x3f7240: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3f7240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3f7244:
    // 0x3f7244: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3f7244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3f7248:
    // 0x3f7248: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3f7248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3f724c:
    // 0x3f724c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3f724cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3f7250:
    // 0x3f7250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f7250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7254:
    // 0x3f7254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f7254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f7258:
    // 0x3f7258: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x3f7258u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
label_3f725c:
    // 0x3f725c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3f725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f7260:
    // 0x3f7260: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3f7260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_3f7264:
    // 0x3f7264: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x3f7264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_3f7268:
    // 0x3f7268: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x3f7268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
label_3f726c:
    // 0x3f726c: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x3f726cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
label_3f7270:
    // 0x3f7270: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3f7270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3f7274:
    // 0x3f7274: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f7274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f7278:
    // 0x3f7278: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3f7278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3f727c:
    // 0x3f727c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3f727cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3f7280:
    // 0x3f7280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f7280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7284:
    // 0x3f7284: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3f7284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3f7288:
    // 0x3f7288: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3f7288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3f728c:
    // 0x3f728c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x3f728cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_3f7290:
    // 0x3f7290: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x3f7290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_3f7294:
    // 0x3f7294: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3f7294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3f7298:
    // 0x3f7298: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3f7298u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f729c:
    // 0x3f729c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3f729cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3f72a0:
    // 0x3f72a0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3f72a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3f72a4:
    // 0x3f72a4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3f72a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3f72a8:
    // 0x3f72a8: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x3f72a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_3f72ac:
    // 0x3f72ac: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3f72acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3f72b0:
    // 0x3f72b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3f72b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3f72b4:
    // 0x3f72b4: 0x3442060a  ori         $v0, $v0, 0x60A
    ctx->pc = 0x3f72b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1546);
label_3f72b8:
    // 0x3f72b8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3f72b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_3f72bc:
    // 0x3f72bc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3f72bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3f72c0:
    // 0x3f72c0: 0x3e00008  jr          $ra
label_3f72c4:
    if (ctx->pc == 0x3F72C4u) {
        ctx->pc = 0x3F72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72C0u;
        // 0x3f72c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F72C8u;
        goto label_fallthrough_0x3f72c0;
    }
    ctx->pc = 0x3F72C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72C0u;
        // 0x3f72c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F72C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f72c0:
    ctx->pc = 0x3F72C8u;
}
