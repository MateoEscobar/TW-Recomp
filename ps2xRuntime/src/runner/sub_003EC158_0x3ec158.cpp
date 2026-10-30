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

// Function: sub_003EC158
// Address: 0x3ec158 - 0x3ec398
void sub_003EC158_0x3ec158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC158_0x3ec158");
#endif

    switch (ctx->pc) {
        case 0x3ec158u: goto label_3ec158;
        case 0x3ec15cu: goto label_3ec15c;
        case 0x3ec160u: goto label_3ec160;
        case 0x3ec164u: goto label_3ec164;
        case 0x3ec168u: goto label_3ec168;
        case 0x3ec16cu: goto label_3ec16c;
        case 0x3ec170u: goto label_3ec170;
        case 0x3ec174u: goto label_3ec174;
        case 0x3ec178u: goto label_3ec178;
        case 0x3ec17cu: goto label_3ec17c;
        case 0x3ec180u: goto label_3ec180;
        case 0x3ec184u: goto label_3ec184;
        case 0x3ec188u: goto label_3ec188;
        case 0x3ec18cu: goto label_3ec18c;
        case 0x3ec190u: goto label_3ec190;
        case 0x3ec194u: goto label_3ec194;
        case 0x3ec198u: goto label_3ec198;
        case 0x3ec19cu: goto label_3ec19c;
        case 0x3ec1a0u: goto label_3ec1a0;
        case 0x3ec1a4u: goto label_3ec1a4;
        case 0x3ec1a8u: goto label_3ec1a8;
        case 0x3ec1acu: goto label_3ec1ac;
        case 0x3ec1b0u: goto label_3ec1b0;
        case 0x3ec1b4u: goto label_3ec1b4;
        case 0x3ec1b8u: goto label_3ec1b8;
        case 0x3ec1bcu: goto label_3ec1bc;
        case 0x3ec1c0u: goto label_3ec1c0;
        case 0x3ec1c4u: goto label_3ec1c4;
        case 0x3ec1c8u: goto label_3ec1c8;
        case 0x3ec1ccu: goto label_3ec1cc;
        case 0x3ec1d0u: goto label_3ec1d0;
        case 0x3ec1d4u: goto label_3ec1d4;
        case 0x3ec1d8u: goto label_3ec1d8;
        case 0x3ec1dcu: goto label_3ec1dc;
        case 0x3ec1e0u: goto label_3ec1e0;
        case 0x3ec1e4u: goto label_3ec1e4;
        case 0x3ec1e8u: goto label_3ec1e8;
        case 0x3ec1ecu: goto label_3ec1ec;
        case 0x3ec1f0u: goto label_3ec1f0;
        case 0x3ec1f4u: goto label_3ec1f4;
        case 0x3ec1f8u: goto label_3ec1f8;
        case 0x3ec1fcu: goto label_3ec1fc;
        case 0x3ec200u: goto label_3ec200;
        case 0x3ec204u: goto label_3ec204;
        case 0x3ec208u: goto label_3ec208;
        case 0x3ec20cu: goto label_3ec20c;
        case 0x3ec210u: goto label_3ec210;
        case 0x3ec214u: goto label_3ec214;
        case 0x3ec218u: goto label_3ec218;
        case 0x3ec21cu: goto label_3ec21c;
        case 0x3ec220u: goto label_3ec220;
        case 0x3ec224u: goto label_3ec224;
        case 0x3ec228u: goto label_3ec228;
        case 0x3ec22cu: goto label_3ec22c;
        case 0x3ec230u: goto label_3ec230;
        case 0x3ec234u: goto label_3ec234;
        case 0x3ec238u: goto label_3ec238;
        case 0x3ec23cu: goto label_3ec23c;
        case 0x3ec240u: goto label_3ec240;
        case 0x3ec244u: goto label_3ec244;
        case 0x3ec248u: goto label_3ec248;
        case 0x3ec24cu: goto label_3ec24c;
        case 0x3ec250u: goto label_3ec250;
        case 0x3ec254u: goto label_3ec254;
        case 0x3ec258u: goto label_3ec258;
        case 0x3ec25cu: goto label_3ec25c;
        case 0x3ec260u: goto label_3ec260;
        case 0x3ec264u: goto label_3ec264;
        case 0x3ec268u: goto label_3ec268;
        case 0x3ec26cu: goto label_3ec26c;
        case 0x3ec270u: goto label_3ec270;
        case 0x3ec274u: goto label_3ec274;
        case 0x3ec278u: goto label_3ec278;
        case 0x3ec27cu: goto label_3ec27c;
        case 0x3ec280u: goto label_3ec280;
        case 0x3ec284u: goto label_3ec284;
        case 0x3ec288u: goto label_3ec288;
        case 0x3ec28cu: goto label_3ec28c;
        case 0x3ec290u: goto label_3ec290;
        case 0x3ec294u: goto label_3ec294;
        case 0x3ec298u: goto label_3ec298;
        case 0x3ec29cu: goto label_3ec29c;
        case 0x3ec2a0u: goto label_3ec2a0;
        case 0x3ec2a4u: goto label_3ec2a4;
        case 0x3ec2a8u: goto label_3ec2a8;
        case 0x3ec2acu: goto label_3ec2ac;
        case 0x3ec2b0u: goto label_3ec2b0;
        case 0x3ec2b4u: goto label_3ec2b4;
        case 0x3ec2b8u: goto label_3ec2b8;
        case 0x3ec2bcu: goto label_3ec2bc;
        case 0x3ec2c0u: goto label_3ec2c0;
        case 0x3ec2c4u: goto label_3ec2c4;
        case 0x3ec2c8u: goto label_3ec2c8;
        case 0x3ec2ccu: goto label_3ec2cc;
        case 0x3ec2d0u: goto label_3ec2d0;
        case 0x3ec2d4u: goto label_3ec2d4;
        case 0x3ec2d8u: goto label_3ec2d8;
        case 0x3ec2dcu: goto label_3ec2dc;
        case 0x3ec2e0u: goto label_3ec2e0;
        case 0x3ec2e4u: goto label_3ec2e4;
        case 0x3ec2e8u: goto label_3ec2e8;
        case 0x3ec2ecu: goto label_3ec2ec;
        case 0x3ec2f0u: goto label_3ec2f0;
        case 0x3ec2f4u: goto label_3ec2f4;
        case 0x3ec2f8u: goto label_3ec2f8;
        case 0x3ec2fcu: goto label_3ec2fc;
        case 0x3ec300u: goto label_3ec300;
        case 0x3ec304u: goto label_3ec304;
        case 0x3ec308u: goto label_3ec308;
        case 0x3ec30cu: goto label_3ec30c;
        case 0x3ec310u: goto label_3ec310;
        case 0x3ec314u: goto label_3ec314;
        case 0x3ec318u: goto label_3ec318;
        case 0x3ec31cu: goto label_3ec31c;
        case 0x3ec320u: goto label_3ec320;
        case 0x3ec324u: goto label_3ec324;
        case 0x3ec328u: goto label_3ec328;
        case 0x3ec32cu: goto label_3ec32c;
        case 0x3ec330u: goto label_3ec330;
        case 0x3ec334u: goto label_3ec334;
        case 0x3ec338u: goto label_3ec338;
        case 0x3ec33cu: goto label_3ec33c;
        case 0x3ec340u: goto label_3ec340;
        case 0x3ec344u: goto label_3ec344;
        case 0x3ec348u: goto label_3ec348;
        case 0x3ec34cu: goto label_3ec34c;
        case 0x3ec350u: goto label_3ec350;
        case 0x3ec354u: goto label_3ec354;
        case 0x3ec358u: goto label_3ec358;
        case 0x3ec35cu: goto label_3ec35c;
        case 0x3ec360u: goto label_3ec360;
        case 0x3ec364u: goto label_3ec364;
        case 0x3ec368u: goto label_3ec368;
        case 0x3ec36cu: goto label_3ec36c;
        case 0x3ec370u: goto label_3ec370;
        case 0x3ec374u: goto label_3ec374;
        case 0x3ec378u: goto label_3ec378;
        case 0x3ec37cu: goto label_3ec37c;
        case 0x3ec380u: goto label_3ec380;
        case 0x3ec384u: goto label_3ec384;
        case 0x3ec388u: goto label_3ec388;
        case 0x3ec38cu: goto label_3ec38c;
        case 0x3ec390u: goto label_3ec390;
        case 0x3ec394u: goto label_3ec394;
        default: break;
    }

    ctx->pc = 0x3ec158u;

label_3ec158:
    // 0x3ec158: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3ec158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_3ec15c:
    // 0x3ec15c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3ec15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_3ec160:
    // 0x3ec160: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3ec160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_3ec164:
    // 0x3ec164: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ec164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ec168:
    // 0x3ec168: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3ec168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_3ec16c:
    // 0x3ec16c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ec16cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ec170:
    // 0x3ec170: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3ec170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_3ec174:
    // 0x3ec174: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3ec174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_3ec178:
    // 0x3ec178: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x3ec178u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3ec17c:
    // 0x3ec17c: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x3ec17cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3ec180:
    // 0x3ec180: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x3ec180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3ec184:
    // 0x3ec184: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x3ec184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3ec188:
    // 0x3ec188: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3ec188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3ec18c:
    // 0x3ec18c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3ec18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ec190:
    // 0x3ec190: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ec190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ec194:
    // 0x3ec194: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ec194u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ec198:
    // 0x3ec198: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ec198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ec19c:
    // 0x3ec19c: 0x40f809  jalr        $v0
label_3ec1a0:
    if (ctx->pc == 0x3EC1A0u) {
        ctx->pc = 0x3EC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC19Cu;
        // 0x3ec1a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC1A4u;
        goto label_3ec1a4;
    }
    ctx->pc = 0x3EC19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EC1A4u);
        ctx->pc = 0x3EC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC19Cu;
        // 0x3ec1a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC19Cu, 0x3EC1A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EC1A4u;
label_3ec1a4:
    // 0x3ec1a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ec1a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec1a8:
    // 0x3ec1a8: 0xc0ea13a  jal         func_3A84E8
label_3ec1ac:
    if (ctx->pc == 0x3EC1ACu) {
        ctx->pc = 0x3EC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1A8u;
        // 0x3ec1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC1B0u;
        goto label_3ec1b0;
    }
    ctx->pc = 0x3EC1A8u;
    SET_GPR_U32(ctx, 31, 0x3EC1B0u);
    ctx->pc = 0x3EC1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC1A8u;
    // 0x3ec1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3EC1A8u, 0x3EC1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC1B0u;
label_3ec1b0:
    // 0x3ec1b0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x3ec1b0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_3ec1b4:
    // 0x3ec1b4: 0xc0ea146  jal         func_3A8518
label_3ec1b8:
    if (ctx->pc == 0x3EC1B8u) {
        ctx->pc = 0x3EC1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1B4u;
        // 0x3ec1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC1BCu;
        goto label_3ec1bc;
    }
    ctx->pc = 0x3EC1B4u;
    SET_GPR_U32(ctx, 31, 0x3EC1BCu);
    ctx->pc = 0x3EC1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC1B4u;
    // 0x3ec1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EC1B4u, 0x3EC1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC1BCu;
label_3ec1bc:
    // 0x3ec1bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ec1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ec1c0:
    // 0x3ec1c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3ec1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec1c4:
    // 0x3ec1c4: 0xc0ea12a  jal         func_3A84A8
label_3ec1c8:
    if (ctx->pc == 0x3EC1C8u) {
        ctx->pc = 0x3EC1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1C4u;
        // 0x3ec1c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC1CCu;
        goto label_3ec1cc;
    }
    ctx->pc = 0x3EC1C4u;
    SET_GPR_U32(ctx, 31, 0x3EC1CCu);
    ctx->pc = 0x3EC1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC1C4u;
    // 0x3ec1c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EC1C4u, 0x3EC1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC1CCu;
label_3ec1cc:
    // 0x3ec1cc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ec1ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec1d0:
    // 0x3ec1d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ec1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ec1d4:
    // 0x3ec1d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ec1d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec1d8:
    // 0x3ec1d8: 0xc0ea12a  jal         func_3A84A8
label_3ec1dc:
    if (ctx->pc == 0x3EC1DCu) {
        ctx->pc = 0x3EC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1D8u;
        // 0x3ec1dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC1E0u;
        goto label_3ec1e0;
    }
    ctx->pc = 0x3EC1D8u;
    SET_GPR_U32(ctx, 31, 0x3EC1E0u);
    ctx->pc = 0x3EC1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC1D8u;
    // 0x3ec1dc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EC1D8u, 0x3EC1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC1E0u;
label_3ec1e0:
    // 0x3ec1e0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ec1e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec1e4:
    // 0x3ec1e4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3ec1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3ec1e8:
    // 0x3ec1e8: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3ec1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3ec1ec:
    // 0x3ec1ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ec1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec1f0:
    // 0x3ec1f0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3ec1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3ec1f4:
    // 0x3ec1f4: 0xc0cd4ee  jal         func_3353B8
label_3ec1f8:
    if (ctx->pc == 0x3EC1F8u) {
        ctx->pc = 0x3EC1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC1F4u;
        // 0x3ec1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC1FCu;
        goto label_3ec1fc;
    }
    ctx->pc = 0x3EC1F4u;
    SET_GPR_U32(ctx, 31, 0x3EC1FCu);
    ctx->pc = 0x3EC1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC1F4u;
    // 0x3ec1f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EC1F4u, 0x3EC1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC1FCu;
label_3ec1fc:
    // 0x3ec1fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ec1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3ec200:
    // 0x3ec200: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3ec200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3ec204:
    // 0x3ec204: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3ec204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3ec208:
    // 0x3ec208: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ec208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ec20c:
    // 0x3ec20c: 0x34630024  ori         $v1, $v1, 0x24
    ctx->pc = 0x3ec20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36);
label_3ec210:
    // 0x3ec210: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3ec210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3ec214:
    // 0x3ec214: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x3ec214u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ec218:
    // 0x3ec218: 0xc0cd518  jal         func_335460
label_3ec21c:
    if (ctx->pc == 0x3EC21Cu) {
        ctx->pc = 0x3EC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC218u;
        // 0x3ec21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC220u;
        goto label_3ec220;
    }
    ctx->pc = 0x3EC218u;
    SET_GPR_U32(ctx, 31, 0x3EC220u);
    ctx->pc = 0x3EC21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC218u;
    // 0x3ec21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EC218u, 0x3EC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC220u;
label_3ec220:
    // 0x3ec220: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3ec220u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3ec224:
    // 0x3ec224: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3ec224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ec228:
    // 0x3ec228: 0xc0e9364  jal         func_3A4D90
label_3ec22c:
    if (ctx->pc == 0x3EC22Cu) {
        ctx->pc = 0x3EC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC228u;
        // 0x3ec22c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC230u;
        goto label_3ec230;
    }
    ctx->pc = 0x3EC228u;
    SET_GPR_U32(ctx, 31, 0x3EC230u);
    ctx->pc = 0x3EC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC228u;
    // 0x3ec22c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D90u, 0x3EC228u, 0x3EC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC230u;
label_3ec230:
    // 0x3ec230: 0xc12e310  jal         func_4B8C40
label_3ec234:
    if (ctx->pc == 0x3EC234u) {
        ctx->pc = 0x3EC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC230u;
        // 0x3ec234: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC238u;
        goto label_3ec238;
    }
    ctx->pc = 0x3EC230u;
    SET_GPR_U32(ctx, 31, 0x3EC238u);
    ctx->pc = 0x3EC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC230u;
    // 0x3ec234: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3EC230u, 0x3EC238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC238u;
label_3ec238:
    // 0x3ec238: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3ec238u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3ec23c:
    // 0x3ec23c: 0xc12e29c  jal         func_4B8A70
label_3ec240:
    if (ctx->pc == 0x3EC240u) {
        ctx->pc = 0x3EC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC23Cu;
        // 0x3ec240: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC244u;
        goto label_3ec244;
    }
    ctx->pc = 0x3EC23Cu;
    SET_GPR_U32(ctx, 31, 0x3EC244u);
    ctx->pc = 0x3EC240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC23Cu;
    // 0x3ec240: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3EC23Cu, 0x3EC244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC244u;
label_3ec244:
    // 0x3ec244: 0xe7b50054  swc1        $f21, 0x54($sp)
    ctx->pc = 0x3ec244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3ec248:
    // 0x3ec248: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3ec248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3ec24c:
    // 0x3ec24c: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x3ec24cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3ec250:
    // 0x3ec250: 0xe7b60058  swc1        $f22, 0x58($sp)
    ctx->pc = 0x3ec250u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3ec254:
    // 0x3ec254: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3ec254u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ec258:
    // 0x3ec258: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ec258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ec25c:
    // 0x3ec25c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x3ec25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_3ec260:
    // 0x3ec260: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3ec260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3ec264:
    // 0x3ec264: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3ec264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3ec268:
    // 0x3ec268: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ec268u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ec26c:
    // 0x3ec26c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3ec26cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ec270:
    // 0x3ec270: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3ec270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ec274:
    // 0x3ec274: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3ec274u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ec278:
    // 0x3ec278: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3ec278u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3ec27c:
    // 0x3ec27c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ec27cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ec280:
    // 0x3ec280: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3ec280u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3ec284:
    // 0x3ec284: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3ec284u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ec288:
    // 0x3ec288: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ec288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ec28c:
    // 0x3ec28c: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3ec28cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ec290:
    // 0x3ec290: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3ec290u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3ec294:
    // 0x3ec294: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3ec294u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3ec298:
    // 0x3ec298: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3ec298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3ec29c:
    // 0x3ec29c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3ec29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ec2a0:
    // 0x3ec2a0: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3ec2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3ec2a4:
    // 0x3ec2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ec2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ec2a8:
    // 0x3ec2a8: 0xc0e858c  jal         func_3A1630
label_3ec2ac:
    if (ctx->pc == 0x3EC2ACu) {
        ctx->pc = 0x3EC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC2A8u;
        // 0x3ec2ac: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC2B0u;
        goto label_3ec2b0;
    }
    ctx->pc = 0x3EC2A8u;
    SET_GPR_U32(ctx, 31, 0x3EC2B0u);
    ctx->pc = 0x3EC2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC2A8u;
    // 0x3ec2ac: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EC2A8u, 0x3EC2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC2B0u;
label_3ec2b0:
    // 0x3ec2b0: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x3ec2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
label_3ec2b4:
    // 0x3ec2b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ec2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ec2b8:
    // 0x3ec2b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ec2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ec2bc:
    // 0x3ec2bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ec2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ec2c0:
    // 0x3ec2c0: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3ec2c0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec2c4:
    // 0x3ec2c4: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3ec2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_3ec2c8:
    // 0x3ec2c8: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x3ec2c8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_3ec2cc:
    // 0x3ec2cc: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x3ec2ccu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ec2d0:
    // 0x3ec2d0: 0x3252ffff  andi        $s2, $s2, 0xFFFF
    ctx->pc = 0x3ec2d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_3ec2d4:
    // 0x3ec2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ec2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec2d8:
    // 0x3ec2d8: 0xae3200c4  sw          $s2, 0xC4($s1)
    ctx->pc = 0x3ec2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 18));
label_3ec2dc:
    // 0x3ec2dc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3ec2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3ec2e0:
    // 0x3ec2e0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3ec2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3ec2e4:
    // 0x3ec2e4: 0x8cd2489c  lw          $s2, 0x489C($a2)
    ctx->pc = 0x3ec2e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
label_3ec2e8:
    // 0x3ec2e8: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3ec2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3ec2ec:
    // 0x3ec2ec: 0x7e250010  sq          $a1, 0x10($s1)
    ctx->pc = 0x3ec2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 5));
label_3ec2f0:
    // 0x3ec2f0: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x3ec2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
label_3ec2f4:
    // 0x3ec2f4: 0xe63700c0  swc1        $f23, 0xC0($s1)
    ctx->pc = 0x3ec2f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3ec2f8:
    // 0x3ec2f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ec2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ec2fc:
    // 0x3ec2fc: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3ec2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3ec300:
    // 0x3ec300: 0xae3300b4  sw          $s3, 0xB4($s1)
    ctx->pc = 0x3ec300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 19));
label_3ec304:
    // 0x3ec304: 0xe63600bc  swc1        $f22, 0xBC($s1)
    ctx->pc = 0x3ec304u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3ec308:
    // 0x3ec308: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x3ec308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
label_3ec30c:
    // 0x3ec30c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ec30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ec310:
    // 0x3ec310: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x3ec310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_3ec314:
    // 0x3ec314: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ec314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ec318:
    // 0x3ec318: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x3ec318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_3ec31c:
    // 0x3ec31c: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x3ec31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_3ec320:
    // 0x3ec320: 0xc136ad6  jal         func_4DAB58
label_3ec324:
    if (ctx->pc == 0x3EC324u) {
        ctx->pc = 0x3EC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC320u;
        // 0x3ec324: 0xe6810008  swc1        $f1, 0x8($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC328u;
        goto label_3ec328;
    }
    ctx->pc = 0x3EC320u;
    SET_GPR_U32(ctx, 31, 0x3EC328u);
    ctx->pc = 0x3EC324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC320u;
    // 0x3ec324: 0xe6810008  swc1        $f1, 0x8($s4) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x3EC320u, 0x3EC328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC328u;
label_3ec328:
    // 0x3ec328: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ec328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec32c:
    // 0x3ec32c: 0xc136ad4  jal         func_4DAB50
label_3ec330:
    if (ctx->pc == 0x3EC330u) {
        ctx->pc = 0x3EC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC32Cu;
        // 0x3ec330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC334u;
        goto label_3ec334;
    }
    ctx->pc = 0x3EC32Cu;
    SET_GPR_U32(ctx, 31, 0x3EC334u);
    ctx->pc = 0x3EC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC32Cu;
    // 0x3ec330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x3EC32Cu, 0x3EC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC334u;
label_3ec334:
    // 0x3ec334: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x3ec334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_3ec338:
    // 0x3ec338: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3ec338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ec33c:
    // 0x3ec33c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3ec33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ec340:
    // 0x3ec340: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ec340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ec344:
    // 0x3ec344: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ec344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ec348:
    // 0x3ec348: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_3ec34c:
    if (ctx->pc == 0x3EC34Cu) {
        ctx->pc = 0x3EC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC348u;
        // 0x3ec34c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC350u;
        goto label_3ec350;
    }
    ctx->pc = 0x3EC348u;
    {
        const bool branch_taken_0x3ec348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3EC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC348u;
        // 0x3ec34c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec348) {
            ctx->pc = 0x3EC368u;
            goto label_3ec368;
        }
    }
    ctx->pc = 0x3EC350u;
label_3ec350:
    // 0x3ec350: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x3ec350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_3ec354:
    // 0x3ec354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ec354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ec358:
    // 0x3ec358: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x3ec358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
label_3ec35c:
    // 0x3ec35c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ec35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ec360:
    // 0x3ec360: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x3ec360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_3ec364:
    // 0x3ec364: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x3ec364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_3ec368:
    // 0x3ec368: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3ec368u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3ec36c:
    // 0x3ec36c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3ec36cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3ec370:
    // 0x3ec370: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3ec370u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ec374:
    // 0x3ec374: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3ec374u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ec378:
    // 0x3ec378: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3ec378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3ec37c:
    // 0x3ec37c: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x3ec37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ec380:
    // 0x3ec380: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x3ec380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ec384:
    // 0x3ec384: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x3ec384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ec388:
    // 0x3ec388: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x3ec388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ec38c:
    // 0x3ec38c: 0x3e00008  jr          $ra
label_3ec390:
    if (ctx->pc == 0x3EC390u) {
        ctx->pc = 0x3EC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC38Cu;
        // 0x3ec390: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EC394u;
        goto label_3ec394;
    }
    ctx->pc = 0x3EC38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC38Cu;
        // 0x3ec390: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC394u;
label_3ec394:
    // 0x3ec394: 0x0  nop
    ctx->pc = 0x3ec394u;
    // NOP
    ctx->pc = 0x3ec398u;
}
