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

// Function: sub_0018E148
// Address: 0x18e148 - 0x18e2f0
void sub_0018E148_0x18e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E148_0x18e148");
#endif

    switch (ctx->pc) {
        case 0x18e148u: goto label_18e148;
        case 0x18e14cu: goto label_18e14c;
        case 0x18e150u: goto label_18e150;
        case 0x18e154u: goto label_18e154;
        case 0x18e158u: goto label_18e158;
        case 0x18e15cu: goto label_18e15c;
        case 0x18e160u: goto label_18e160;
        case 0x18e164u: goto label_18e164;
        case 0x18e168u: goto label_18e168;
        case 0x18e16cu: goto label_18e16c;
        case 0x18e170u: goto label_18e170;
        case 0x18e174u: goto label_18e174;
        case 0x18e178u: goto label_18e178;
        case 0x18e17cu: goto label_18e17c;
        case 0x18e180u: goto label_18e180;
        case 0x18e184u: goto label_18e184;
        case 0x18e188u: goto label_18e188;
        case 0x18e18cu: goto label_18e18c;
        case 0x18e190u: goto label_18e190;
        case 0x18e194u: goto label_18e194;
        case 0x18e198u: goto label_18e198;
        case 0x18e19cu: goto label_18e19c;
        case 0x18e1a0u: goto label_18e1a0;
        case 0x18e1a4u: goto label_18e1a4;
        case 0x18e1a8u: goto label_18e1a8;
        case 0x18e1acu: goto label_18e1ac;
        case 0x18e1b0u: goto label_18e1b0;
        case 0x18e1b4u: goto label_18e1b4;
        case 0x18e1b8u: goto label_18e1b8;
        case 0x18e1bcu: goto label_18e1bc;
        case 0x18e1c0u: goto label_18e1c0;
        case 0x18e1c4u: goto label_18e1c4;
        case 0x18e1c8u: goto label_18e1c8;
        case 0x18e1ccu: goto label_18e1cc;
        case 0x18e1d0u: goto label_18e1d0;
        case 0x18e1d4u: goto label_18e1d4;
        case 0x18e1d8u: goto label_18e1d8;
        case 0x18e1dcu: goto label_18e1dc;
        case 0x18e1e0u: goto label_18e1e0;
        case 0x18e1e4u: goto label_18e1e4;
        case 0x18e1e8u: goto label_18e1e8;
        case 0x18e1ecu: goto label_18e1ec;
        case 0x18e1f0u: goto label_18e1f0;
        case 0x18e1f4u: goto label_18e1f4;
        case 0x18e1f8u: goto label_18e1f8;
        case 0x18e1fcu: goto label_18e1fc;
        case 0x18e200u: goto label_18e200;
        case 0x18e204u: goto label_18e204;
        case 0x18e208u: goto label_18e208;
        case 0x18e20cu: goto label_18e20c;
        case 0x18e210u: goto label_18e210;
        case 0x18e214u: goto label_18e214;
        case 0x18e218u: goto label_18e218;
        case 0x18e21cu: goto label_18e21c;
        case 0x18e220u: goto label_18e220;
        case 0x18e224u: goto label_18e224;
        case 0x18e228u: goto label_18e228;
        case 0x18e22cu: goto label_18e22c;
        case 0x18e230u: goto label_18e230;
        case 0x18e234u: goto label_18e234;
        case 0x18e238u: goto label_18e238;
        case 0x18e23cu: goto label_18e23c;
        case 0x18e240u: goto label_18e240;
        case 0x18e244u: goto label_18e244;
        case 0x18e248u: goto label_18e248;
        case 0x18e24cu: goto label_18e24c;
        case 0x18e250u: goto label_18e250;
        case 0x18e254u: goto label_18e254;
        case 0x18e258u: goto label_18e258;
        case 0x18e25cu: goto label_18e25c;
        case 0x18e260u: goto label_18e260;
        case 0x18e264u: goto label_18e264;
        case 0x18e268u: goto label_18e268;
        case 0x18e26cu: goto label_18e26c;
        case 0x18e270u: goto label_18e270;
        case 0x18e274u: goto label_18e274;
        case 0x18e278u: goto label_18e278;
        case 0x18e27cu: goto label_18e27c;
        case 0x18e280u: goto label_18e280;
        case 0x18e284u: goto label_18e284;
        case 0x18e288u: goto label_18e288;
        case 0x18e28cu: goto label_18e28c;
        case 0x18e290u: goto label_18e290;
        case 0x18e294u: goto label_18e294;
        case 0x18e298u: goto label_18e298;
        case 0x18e29cu: goto label_18e29c;
        case 0x18e2a0u: goto label_18e2a0;
        case 0x18e2a4u: goto label_18e2a4;
        case 0x18e2a8u: goto label_18e2a8;
        case 0x18e2acu: goto label_18e2ac;
        case 0x18e2b0u: goto label_18e2b0;
        case 0x18e2b4u: goto label_18e2b4;
        case 0x18e2b8u: goto label_18e2b8;
        case 0x18e2bcu: goto label_18e2bc;
        case 0x18e2c0u: goto label_18e2c0;
        case 0x18e2c4u: goto label_18e2c4;
        case 0x18e2c8u: goto label_18e2c8;
        case 0x18e2ccu: goto label_18e2cc;
        case 0x18e2d0u: goto label_18e2d0;
        case 0x18e2d4u: goto label_18e2d4;
        case 0x18e2d8u: goto label_18e2d8;
        case 0x18e2dcu: goto label_18e2dc;
        case 0x18e2e0u: goto label_18e2e0;
        case 0x18e2e4u: goto label_18e2e4;
        case 0x18e2e8u: goto label_18e2e8;
        case 0x18e2ecu: goto label_18e2ec;
        default: break;
    }

    ctx->pc = 0x18e148u;

label_18e148:
    // 0x18e148: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x18e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_18e14c:
    // 0x18e14c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x18e14cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_18e150:
    // 0x18e150: 0x7fb204f0  sq          $s2, 0x4F0($sp)
    ctx->pc = 0x18e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 18));
label_18e154:
    // 0x18e154: 0x7fb304e0  sq          $s3, 0x4E0($sp)
    ctx->pc = 0x18e154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 19));
label_18e158:
    // 0x18e158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18e158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e15c:
    // 0x18e15c: 0x7fb404d0  sq          $s4, 0x4D0($sp)
    ctx->pc = 0x18e15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 20));
label_18e160:
    // 0x18e160: 0x24f3deb8  addiu       $s3, $a3, -0x2148
    ctx->pc = 0x18e160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958776));
label_18e164:
    // 0x18e164: 0x7fb504c0  sq          $s5, 0x4C0($sp)
    ctx->pc = 0x18e164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 21));
label_18e168:
    // 0x18e168: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x18e168u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_18e16c:
    // 0x18e16c: 0x7fb604b0  sq          $s6, 0x4B0($sp)
    ctx->pc = 0x18e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 22));
label_18e170:
    // 0x18e170: 0x27b50460  addiu       $s5, $sp, 0x460
    ctx->pc = 0x18e170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_18e174:
    // 0x18e174: 0x7fb704a0  sq          $s7, 0x4A0($sp)
    ctx->pc = 0x18e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 23));
label_18e178:
    // 0x18e178: 0x27b60450  addiu       $s6, $sp, 0x450
    ctx->pc = 0x18e178u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_18e17c:
    // 0x18e17c: 0x7fbe0490  sq          $fp, 0x490($sp)
    ctx->pc = 0x18e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 30));
label_18e180:
    // 0x18e180: 0x27b70440  addiu       $s7, $sp, 0x440
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_18e184:
    // 0x18e184: 0xe7b60530  swc1        $f22, 0x530($sp)
    ctx->pc = 0x18e184u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_18e188:
    // 0x18e188: 0x27be0430  addiu       $fp, $sp, 0x430
    ctx->pc = 0x18e188u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_18e18c:
    // 0x18e18c: 0xe7b50528  swc1        $f21, 0x528($sp)
    ctx->pc = 0x18e18cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_18e190:
    // 0x18e190: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x18e190u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_18e194:
    // 0x18e194: 0xe7b40520  swc1        $f20, 0x520($sp)
    ctx->pc = 0x18e194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_18e198:
    // 0x18e198: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x18e198u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_18e19c:
    // 0x18e19c: 0x7fb00510  sq          $s0, 0x510($sp)
    ctx->pc = 0x18e19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 16));
label_18e1a0:
    // 0x18e1a0: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x18e1a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
label_18e1a4:
    // 0x18e1a4: 0x7fb10500  sq          $s1, 0x500($sp)
    ctx->pc = 0x18e1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 17));
label_18e1a8:
    // 0x18e1a8: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x18e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_18e1ac:
    // 0x18e1ac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18e1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18e1b0:
    // 0x18e1b0: 0xafa40470  sw          $a0, 0x470($sp)
    ctx->pc = 0x18e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 4));
label_18e1b4:
    // 0x18e1b4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x18e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_18e1b8:
    // 0x18e1b8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x18e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_18e1bc:
    // 0x18e1bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x18e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_18e1c0:
    // 0x18e1c0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x18e1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_18e1c4:
    // 0x18e1c4: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x18e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_18e1c8:
    // 0x18e1c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_18e1cc:
    // 0x18e1cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18e1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18e1d0:
    // 0x18e1d0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_18e1d4:
    // 0x18e1d4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18e1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_18e1d8:
    // 0x18e1d8: 0xafa20474  sw          $v0, 0x474($sp)
    ctx->pc = 0x18e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1140), GPR_U32(ctx, 2));
label_18e1dc:
    // 0x18e1dc: 0x27a20410  addiu       $v0, $sp, 0x410
    ctx->pc = 0x18e1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_18e1e0:
    // 0x18e1e0: 0xafa2047c  sw          $v0, 0x47C($sp)
    ctx->pc = 0x18e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1148), GPR_U32(ctx, 2));
label_18e1e4:
    // 0x18e1e4: 0x27a20420  addiu       $v0, $sp, 0x420
    ctx->pc = 0x18e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_18e1e8:
    // 0x18e1e8: 0xafa20478  sw          $v0, 0x478($sp)
    ctx->pc = 0x18e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 2));
label_18e1ec:
    // 0x18e1ec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x18e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18e1f0:
    // 0x18e1f0: 0xc0e4092  jal         func_390248
label_18e1f4:
    if (ctx->pc == 0x18E1F4u) {
        ctx->pc = 0x18E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1F0u;
        // 0x18e1f4: 0x24840218  addiu       $a0, $a0, 0x218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E1F8u;
        goto label_18e1f8;
    }
    ctx->pc = 0x18E1F0u;
    SET_GPR_U32(ctx, 31, 0x18E1F8u);
    ctx->pc = 0x18E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E1F0u;
    // 0x18e1f4: 0x24840218  addiu       $a0, $a0, 0x218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390248u, 0x18E1F0u, 0x18E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E1F8u;
label_18e1f8:
    // 0x18e1f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18e1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e1fc:
    // 0x18e1fc: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_18e200:
    if (ctx->pc == 0x18E200u) {
        ctx->pc = 0x18E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1FCu;
        // 0x18e200: 0x8fa20470  lw          $v0, 0x470($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E204u;
        goto label_18e204;
    }
    ctx->pc = 0x18E1FCu;
    {
        const bool branch_taken_0x18e1fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E1FCu;
        // 0x18e200: 0x8fa20470  lw          $v0, 0x470($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e1fc) {
            ctx->pc = 0x18E228u;
            goto label_18e228;
        }
    }
    ctx->pc = 0x18E204u;
label_18e204:
    // 0x18e204: 0xc0e8b48  jal         func_3A2D20
label_18e208:
    if (ctx->pc == 0x18E208u) {
        ctx->pc = 0x18E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E204u;
        // 0x18e208: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E20Cu;
        goto label_18e20c;
    }
    ctx->pc = 0x18E204u;
    SET_GPR_U32(ctx, 31, 0x18E20Cu);
    ctx->pc = 0x18E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E204u;
    // 0x18e208: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x18E204u, 0x18E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E20Cu;
label_18e20c:
    // 0x18e20c: 0x8e842c7c  lw          $a0, 0x2C7C($s4)
    ctx->pc = 0x18e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
label_18e210:
    // 0x18e210: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18e210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e214:
    // 0x18e214: 0xc0e8b80  jal         func_3A2E00
label_18e218:
    if (ctx->pc == 0x18E218u) {
        ctx->pc = 0x18E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E214u;
        // 0x18e218: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E21Cu;
        goto label_18e21c;
    }
    ctx->pc = 0x18E214u;
    SET_GPR_U32(ctx, 31, 0x18E21Cu);
    ctx->pc = 0x18E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E214u;
    // 0x18e218: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x18E214u, 0x18E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E21Cu;
label_18e21c:
    // 0x18e21c: 0xc0e8b50  jal         func_3A2D40
label_18e220:
    if (ctx->pc == 0x18E220u) {
        ctx->pc = 0x18E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E21Cu;
        // 0x18e220: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E224u;
        goto label_18e224;
    }
    ctx->pc = 0x18E21Cu;
    SET_GPR_U32(ctx, 31, 0x18E224u);
    ctx->pc = 0x18E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E21Cu;
    // 0x18e220: 0x8e842c7c  lw          $a0, 0x2C7C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x18E21Cu, 0x18E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E224u;
label_18e224:
    // 0x18e224: 0x8fa20470  lw          $v0, 0x470($sp)
    ctx->pc = 0x18e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
label_18e228:
    // 0x18e228: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18e22c:
    // 0x18e22c: 0x8fa5047c  lw          $a1, 0x47C($sp)
    ctx->pc = 0x18e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1148)));
label_18e230:
    // 0x18e230: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x18e230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_18e234:
    // 0x18e234: 0xafa20420  sw          $v0, 0x420($sp)
    ctx->pc = 0x18e234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 2));
label_18e238:
    // 0x18e238: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x18e238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_18e23c:
    // 0x18e23c: 0x8fa20474  lw          $v0, 0x474($sp)
    ctx->pc = 0x18e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1140)));
label_18e240:
    // 0x18e240: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x18e240u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18e244:
    // 0x18e244: 0x8fa60478  lw          $a2, 0x478($sp)
    ctx->pc = 0x18e244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1144)));
label_18e248:
    // 0x18e248: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x18e248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18e24c:
    // 0x18e24c: 0xafb20410  sw          $s2, 0x410($sp)
    ctx->pc = 0x18e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 18));
label_18e250:
    // 0x18e250: 0xafa20430  sw          $v0, 0x430($sp)
    ctx->pc = 0x18e250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 2));
label_18e254:
    // 0x18e254: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18e254u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_18e258:
    // 0x18e258: 0xe7b60440  swc1        $f22, 0x440($sp)
    ctx->pc = 0x18e258u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_18e25c:
    // 0x18e25c: 0xe7b50450  swc1        $f21, 0x450($sp)
    ctx->pc = 0x18e25cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_18e260:
    // 0x18e260: 0xc0ea040  jal         func_3A8100
label_18e264:
    if (ctx->pc == 0x18E264u) {
        ctx->pc = 0x18E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E260u;
        // 0x18e264: 0xe7b40460  swc1        $f20, 0x460($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E268u;
        goto label_18e268;
    }
    ctx->pc = 0x18E260u;
    SET_GPR_U32(ctx, 31, 0x18E268u);
    ctx->pc = 0x18E264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E260u;
    // 0x18e264: 0xe7b40460  swc1        $f20, 0x460($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8100u, 0x18E260u, 0x18E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E268u;
label_18e268:
    // 0x18e268: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x18e268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_18e26c:
    // 0x18e26c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18e26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18e270:
    // 0x18e270: 0xc0f15bc  jal         func_3C56F0
label_18e274:
    if (ctx->pc == 0x18E274u) {
        ctx->pc = 0x18E274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E270u;
        // 0x18e274: 0x24442fb8  addiu       $a0, $v0, 0x2FB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E278u;
        goto label_18e278;
    }
    ctx->pc = 0x18E270u;
    SET_GPR_U32(ctx, 31, 0x18E278u);
    ctx->pc = 0x18E274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E270u;
    // 0x18e274: 0x24442fb8  addiu       $a0, $v0, 0x2FB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x18E270u, 0x18E278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E278u;
label_18e278:
    // 0x18e278: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18e278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e27c:
    // 0x18e27c: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x18e27cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18e280:
    // 0x18e280: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18e284:
    // 0x18e284: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18e284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18e288:
    // 0x18e288: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x18e288u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_18e28c:
    // 0x18e28c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x18e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18e290:
    // 0x18e290: 0x40f809  jalr        $v0
label_18e294:
    if (ctx->pc == 0x18E294u) {
        ctx->pc = 0x18E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E290u;
        // 0x18e294: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E298u;
        goto label_18e298;
    }
    ctx->pc = 0x18E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E298u);
        ctx->pc = 0x18E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E290u;
        // 0x18e294: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E290u, 0x18E298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E298u;
label_18e298:
    // 0x18e298: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x18e298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_18e29c:
    // 0x18e29c: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x18e29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e2a0:
    // 0x18e2a0: 0x5440ffd3  bnel        $v0, $zero, . + 4 + (-0x2D << 2)
label_18e2a4:
    if (ctx->pc == 0x18E2A4u) {
        ctx->pc = 0x18E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2A0u;
        // 0x18e2a4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2A8u;
        goto label_18e2a8;
    }
    ctx->pc = 0x18E2A0u;
    {
        const bool branch_taken_0x18e2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e2a0) {
            ctx->pc = 0x18E2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E2A0u;
            // 0x18e2a4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e1f0;
        }
    }
    ctx->pc = 0x18E2A8u;
label_18e2a8:
    // 0x18e2a8: 0x7bb00510  lq          $s0, 0x510($sp)
    ctx->pc = 0x18e2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_18e2ac:
    // 0x18e2ac: 0x7bb10500  lq          $s1, 0x500($sp)
    ctx->pc = 0x18e2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_18e2b0:
    // 0x18e2b0: 0x7bb204f0  lq          $s2, 0x4F0($sp)
    ctx->pc = 0x18e2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_18e2b4:
    // 0x18e2b4: 0x7bb304e0  lq          $s3, 0x4E0($sp)
    ctx->pc = 0x18e2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_18e2b8:
    // 0x18e2b8: 0x7bb404d0  lq          $s4, 0x4D0($sp)
    ctx->pc = 0x18e2b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_18e2bc:
    // 0x18e2bc: 0x7bb504c0  lq          $s5, 0x4C0($sp)
    ctx->pc = 0x18e2bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_18e2c0:
    // 0x18e2c0: 0x7bb604b0  lq          $s6, 0x4B0($sp)
    ctx->pc = 0x18e2c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_18e2c4:
    // 0x18e2c4: 0x7bb704a0  lq          $s7, 0x4A0($sp)
    ctx->pc = 0x18e2c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_18e2c8:
    // 0x18e2c8: 0x7bbe0490  lq          $fp, 0x490($sp)
    ctx->pc = 0x18e2c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_18e2cc:
    // 0x18e2cc: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x18e2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_18e2d0:
    // 0x18e2d0: 0xc7b60530  lwc1        $f22, 0x530($sp)
    ctx->pc = 0x18e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18e2d4:
    // 0x18e2d4: 0xc7b50528  lwc1        $f21, 0x528($sp)
    ctx->pc = 0x18e2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18e2d8:
    // 0x18e2d8: 0xc7b40520  lwc1        $f20, 0x520($sp)
    ctx->pc = 0x18e2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18e2dc:
    // 0x18e2dc: 0x3e00008  jr          $ra
label_18e2e0:
    if (ctx->pc == 0x18E2E0u) {
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E2E4u;
        goto label_18e2e4;
    }
    ctx->pc = 0x18E2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E2DCu;
        // 0x18e2e0: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E2E4u;
label_18e2e4:
    // 0x18e2e4: 0x0  nop
    ctx->pc = 0x18e2e4u;
    // NOP
label_18e2e8:
    // 0x18e2e8: 0x27bd0460  addiu       $sp, $sp, 0x460
    ctx->pc = 0x18e2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_18e2ec:
    // 0x18e2ec: 0x0  nop
    ctx->pc = 0x18e2ecu;
    // NOP
    ctx->pc = 0x18e2f0u;
}
