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

// Function: sub_0015D160
// Address: 0x15d160 - 0x15d420
void sub_0015D160_0x15d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D160_0x15d160");
#endif

    switch (ctx->pc) {
        case 0x15d160u: goto label_15d160;
        case 0x15d164u: goto label_15d164;
        case 0x15d168u: goto label_15d168;
        case 0x15d16cu: goto label_15d16c;
        case 0x15d170u: goto label_15d170;
        case 0x15d174u: goto label_15d174;
        case 0x15d178u: goto label_15d178;
        case 0x15d17cu: goto label_15d17c;
        case 0x15d180u: goto label_15d180;
        case 0x15d184u: goto label_15d184;
        case 0x15d188u: goto label_15d188;
        case 0x15d18cu: goto label_15d18c;
        case 0x15d190u: goto label_15d190;
        case 0x15d194u: goto label_15d194;
        case 0x15d198u: goto label_15d198;
        case 0x15d19cu: goto label_15d19c;
        case 0x15d1a0u: goto label_15d1a0;
        case 0x15d1a4u: goto label_15d1a4;
        case 0x15d1a8u: goto label_15d1a8;
        case 0x15d1acu: goto label_15d1ac;
        case 0x15d1b0u: goto label_15d1b0;
        case 0x15d1b4u: goto label_15d1b4;
        case 0x15d1b8u: goto label_15d1b8;
        case 0x15d1bcu: goto label_15d1bc;
        case 0x15d1c0u: goto label_15d1c0;
        case 0x15d1c4u: goto label_15d1c4;
        case 0x15d1c8u: goto label_15d1c8;
        case 0x15d1ccu: goto label_15d1cc;
        case 0x15d1d0u: goto label_15d1d0;
        case 0x15d1d4u: goto label_15d1d4;
        case 0x15d1d8u: goto label_15d1d8;
        case 0x15d1dcu: goto label_15d1dc;
        case 0x15d1e0u: goto label_15d1e0;
        case 0x15d1e4u: goto label_15d1e4;
        case 0x15d1e8u: goto label_15d1e8;
        case 0x15d1ecu: goto label_15d1ec;
        case 0x15d1f0u: goto label_15d1f0;
        case 0x15d1f4u: goto label_15d1f4;
        case 0x15d1f8u: goto label_15d1f8;
        case 0x15d1fcu: goto label_15d1fc;
        case 0x15d200u: goto label_15d200;
        case 0x15d204u: goto label_15d204;
        case 0x15d208u: goto label_15d208;
        case 0x15d20cu: goto label_15d20c;
        case 0x15d210u: goto label_15d210;
        case 0x15d214u: goto label_15d214;
        case 0x15d218u: goto label_15d218;
        case 0x15d21cu: goto label_15d21c;
        case 0x15d220u: goto label_15d220;
        case 0x15d224u: goto label_15d224;
        case 0x15d228u: goto label_15d228;
        case 0x15d22cu: goto label_15d22c;
        case 0x15d230u: goto label_15d230;
        case 0x15d234u: goto label_15d234;
        case 0x15d238u: goto label_15d238;
        case 0x15d23cu: goto label_15d23c;
        case 0x15d240u: goto label_15d240;
        case 0x15d244u: goto label_15d244;
        case 0x15d248u: goto label_15d248;
        case 0x15d24cu: goto label_15d24c;
        case 0x15d250u: goto label_15d250;
        case 0x15d254u: goto label_15d254;
        case 0x15d258u: goto label_15d258;
        case 0x15d25cu: goto label_15d25c;
        case 0x15d260u: goto label_15d260;
        case 0x15d264u: goto label_15d264;
        case 0x15d268u: goto label_15d268;
        case 0x15d26cu: goto label_15d26c;
        case 0x15d270u: goto label_15d270;
        case 0x15d274u: goto label_15d274;
        case 0x15d278u: goto label_15d278;
        case 0x15d27cu: goto label_15d27c;
        case 0x15d280u: goto label_15d280;
        case 0x15d284u: goto label_15d284;
        case 0x15d288u: goto label_15d288;
        case 0x15d28cu: goto label_15d28c;
        case 0x15d290u: goto label_15d290;
        case 0x15d294u: goto label_15d294;
        case 0x15d298u: goto label_15d298;
        case 0x15d29cu: goto label_15d29c;
        case 0x15d2a0u: goto label_15d2a0;
        case 0x15d2a4u: goto label_15d2a4;
        case 0x15d2a8u: goto label_15d2a8;
        case 0x15d2acu: goto label_15d2ac;
        case 0x15d2b0u: goto label_15d2b0;
        case 0x15d2b4u: goto label_15d2b4;
        case 0x15d2b8u: goto label_15d2b8;
        case 0x15d2bcu: goto label_15d2bc;
        case 0x15d2c0u: goto label_15d2c0;
        case 0x15d2c4u: goto label_15d2c4;
        case 0x15d2c8u: goto label_15d2c8;
        case 0x15d2ccu: goto label_15d2cc;
        case 0x15d2d0u: goto label_15d2d0;
        case 0x15d2d4u: goto label_15d2d4;
        case 0x15d2d8u: goto label_15d2d8;
        case 0x15d2dcu: goto label_15d2dc;
        case 0x15d2e0u: goto label_15d2e0;
        case 0x15d2e4u: goto label_15d2e4;
        case 0x15d2e8u: goto label_15d2e8;
        case 0x15d2ecu: goto label_15d2ec;
        case 0x15d2f0u: goto label_15d2f0;
        case 0x15d2f4u: goto label_15d2f4;
        case 0x15d2f8u: goto label_15d2f8;
        case 0x15d2fcu: goto label_15d2fc;
        case 0x15d300u: goto label_15d300;
        case 0x15d304u: goto label_15d304;
        case 0x15d308u: goto label_15d308;
        case 0x15d30cu: goto label_15d30c;
        case 0x15d310u: goto label_15d310;
        case 0x15d314u: goto label_15d314;
        case 0x15d318u: goto label_15d318;
        case 0x15d31cu: goto label_15d31c;
        case 0x15d320u: goto label_15d320;
        case 0x15d324u: goto label_15d324;
        case 0x15d328u: goto label_15d328;
        case 0x15d32cu: goto label_15d32c;
        case 0x15d330u: goto label_15d330;
        case 0x15d334u: goto label_15d334;
        case 0x15d338u: goto label_15d338;
        case 0x15d33cu: goto label_15d33c;
        case 0x15d340u: goto label_15d340;
        case 0x15d344u: goto label_15d344;
        case 0x15d348u: goto label_15d348;
        case 0x15d34cu: goto label_15d34c;
        case 0x15d350u: goto label_15d350;
        case 0x15d354u: goto label_15d354;
        case 0x15d358u: goto label_15d358;
        case 0x15d35cu: goto label_15d35c;
        case 0x15d360u: goto label_15d360;
        case 0x15d364u: goto label_15d364;
        case 0x15d368u: goto label_15d368;
        case 0x15d36cu: goto label_15d36c;
        case 0x15d370u: goto label_15d370;
        case 0x15d374u: goto label_15d374;
        case 0x15d378u: goto label_15d378;
        case 0x15d37cu: goto label_15d37c;
        case 0x15d380u: goto label_15d380;
        case 0x15d384u: goto label_15d384;
        case 0x15d388u: goto label_15d388;
        case 0x15d38cu: goto label_15d38c;
        case 0x15d390u: goto label_15d390;
        case 0x15d394u: goto label_15d394;
        case 0x15d398u: goto label_15d398;
        case 0x15d39cu: goto label_15d39c;
        case 0x15d3a0u: goto label_15d3a0;
        case 0x15d3a4u: goto label_15d3a4;
        case 0x15d3a8u: goto label_15d3a8;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d3b0u: goto label_15d3b0;
        case 0x15d3b4u: goto label_15d3b4;
        case 0x15d3b8u: goto label_15d3b8;
        case 0x15d3bcu: goto label_15d3bc;
        case 0x15d3c0u: goto label_15d3c0;
        case 0x15d3c4u: goto label_15d3c4;
        case 0x15d3c8u: goto label_15d3c8;
        case 0x15d3ccu: goto label_15d3cc;
        case 0x15d3d0u: goto label_15d3d0;
        case 0x15d3d4u: goto label_15d3d4;
        case 0x15d3d8u: goto label_15d3d8;
        case 0x15d3dcu: goto label_15d3dc;
        case 0x15d3e0u: goto label_15d3e0;
        case 0x15d3e4u: goto label_15d3e4;
        case 0x15d3e8u: goto label_15d3e8;
        case 0x15d3ecu: goto label_15d3ec;
        case 0x15d3f0u: goto label_15d3f0;
        case 0x15d3f4u: goto label_15d3f4;
        case 0x15d3f8u: goto label_15d3f8;
        case 0x15d3fcu: goto label_15d3fc;
        case 0x15d400u: goto label_15d400;
        case 0x15d404u: goto label_15d404;
        case 0x15d408u: goto label_15d408;
        case 0x15d40cu: goto label_15d40c;
        case 0x15d410u: goto label_15d410;
        case 0x15d414u: goto label_15d414;
        case 0x15d418u: goto label_15d418;
        case 0x15d41cu: goto label_15d41c;
        default: break;
    }

    ctx->pc = 0x15d160u;

label_15d160:
    // 0x15d160: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15d164:
    // 0x15d164: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15d168:
    // 0x15d168: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_15d16c:
    // 0x15d16c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d170:
    // 0x15d170: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15d170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15d174:
    // 0x15d174: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15d178:
    // 0x15d178: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15d178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15d17c:
    // 0x15d17c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15d17cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15d180:
    // 0x15d180: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15d184:
    // 0x15d184: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15d188:
    // 0x15d188: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15d188u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15d18c:
    // 0x15d18c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x15d18cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_15d190:
    // 0x15d190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15d194:
    // 0x15d194: 0xc0517d8  jal         func_145F60
label_15d198:
    if (ctx->pc == 0x15D198u) {
        ctx->pc = 0x15D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D194u;
        // 0x15d198: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D19Cu;
        goto label_15d19c;
    }
    ctx->pc = 0x15D194u;
    SET_GPR_U32(ctx, 31, 0x15D19Cu);
    ctx->pc = 0x15D198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D194u;
    // 0x15d198: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15D194u, 0x15D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D19Cu;
label_15d19c:
    // 0x15d19c: 0xc05587e  jal         func_1561F8
label_15d1a0:
    if (ctx->pc == 0x15D1A0u) {
        ctx->pc = 0x15D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D19Cu;
        // 0x15d1a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1A4u;
        goto label_15d1a4;
    }
    ctx->pc = 0x15D19Cu;
    SET_GPR_U32(ctx, 31, 0x15D1A4u);
    ctx->pc = 0x15D1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D19Cu;
    // 0x15d1a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15D19Cu, 0x15D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1A4u;
label_15d1a4:
    // 0x15d1a4: 0xc055888  jal         func_156220
label_15d1a8:
    if (ctx->pc == 0x15D1A8u) {
        ctx->pc = 0x15D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1A4u;
        // 0x15d1a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1ACu;
        goto label_15d1ac;
    }
    ctx->pc = 0x15D1A4u;
    SET_GPR_U32(ctx, 31, 0x15D1ACu);
    ctx->pc = 0x15D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1A4u;
    // 0x15d1a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15D1A4u, 0x15D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1ACu;
label_15d1ac:
    // 0x15d1ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15d1b0:
    // 0x15d1b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15d1b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15d1b4:
    // 0x15d1b4: 0xc0e8c52  jal         func_3A3148
label_15d1b8:
    if (ctx->pc == 0x15D1B8u) {
        ctx->pc = 0x15D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1B4u;
        // 0x15d1b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1BCu;
        goto label_15d1bc;
    }
    ctx->pc = 0x15D1B4u;
    SET_GPR_U32(ctx, 31, 0x15D1BCu);
    ctx->pc = 0x15D1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1B4u;
    // 0x15d1b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15D1B4u, 0x15D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1BCu;
label_15d1bc:
    // 0x15d1bc: 0xc0558b2  jal         func_1562C8
label_15d1c0:
    if (ctx->pc == 0x15D1C0u) {
        ctx->pc = 0x15D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1BCu;
        // 0x15d1c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1C4u;
        goto label_15d1c4;
    }
    ctx->pc = 0x15D1BCu;
    SET_GPR_U32(ctx, 31, 0x15D1C4u);
    ctx->pc = 0x15D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1BCu;
    // 0x15d1c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15D1BCu, 0x15D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1C4u;
label_15d1c4:
    // 0x15d1c4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15d1c8:
    // 0x15d1c8: 0xc0e8c6a  jal         func_3A31A8
label_15d1cc:
    if (ctx->pc == 0x15D1CCu) {
        ctx->pc = 0x15D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1C8u;
        // 0x15d1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1D0u;
        goto label_15d1d0;
    }
    ctx->pc = 0x15D1C8u;
    SET_GPR_U32(ctx, 31, 0x15D1D0u);
    ctx->pc = 0x15D1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1C8u;
    // 0x15d1cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15D1C8u, 0x15D1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1D0u;
label_15d1d0:
    // 0x15d1d0: 0xc0926e6  jal         func_249B98
label_15d1d4:
    if (ctx->pc == 0x15D1D4u) {
        ctx->pc = 0x15D1D8u;
        goto label_15d1d8;
    }
    ctx->pc = 0x15D1D0u;
    SET_GPR_U32(ctx, 31, 0x15D1D8u);
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x15D1D0u, 0x15D1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1D8u;
label_15d1d8:
    // 0x15d1d8: 0xc062a60  jal         func_18A980
label_15d1dc:
    if (ctx->pc == 0x15D1DCu) {
        ctx->pc = 0x15D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1D8u;
        // 0x15d1dc: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1E0u;
        goto label_15d1e0;
    }
    ctx->pc = 0x15D1D8u;
    SET_GPR_U32(ctx, 31, 0x15D1E0u);
    ctx->pc = 0x15D1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1D8u;
    // 0x15d1dc: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15D1D8u, 0x15D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1E0u;
label_15d1e0:
    // 0x15d1e0: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15d1e4:
    // 0x15d1e4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d1e8:
    // 0x15d1e8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15d1e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15d1ec:
    // 0x15d1ec: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15d1f0:
    // 0x15d1f0: 0x60f809  jalr        $v1
label_15d1f4:
    if (ctx->pc == 0x15D1F4u) {
        ctx->pc = 0x15D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1F0u;
        // 0x15d1f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D1F8u;
        goto label_15d1f8;
    }
    ctx->pc = 0x15D1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D1F8u);
        ctx->pc = 0x15D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1F0u;
        // 0x15d1f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D1F0u, 0x15D1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D1F8u;
label_15d1f8:
    // 0x15d1f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15d1fc:
    // 0x15d1fc: 0xc103e28  jal         func_40F8A0
label_15d200:
    if (ctx->pc == 0x15D200u) {
        ctx->pc = 0x15D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D1FCu;
        // 0x15d200: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D204u;
        goto label_15d204;
    }
    ctx->pc = 0x15D1FCu;
    SET_GPR_U32(ctx, 31, 0x15D204u);
    ctx->pc = 0x15D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D1FCu;
    // 0x15d200: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15D1FCu, 0x15D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D204u;
label_15d204:
    // 0x15d204: 0xc06181a  jal         func_186068
label_15d208:
    if (ctx->pc == 0x15D208u) {
        ctx->pc = 0x15D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D204u;
        // 0x15d208: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D20Cu;
        goto label_15d20c;
    }
    ctx->pc = 0x15D204u;
    SET_GPR_U32(ctx, 31, 0x15D20Cu);
    ctx->pc = 0x15D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D204u;
    // 0x15d208: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15D204u, 0x15D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D20Cu;
label_15d20c:
    // 0x15d20c: 0xc055902  jal         func_156408
label_15d210:
    if (ctx->pc == 0x15D210u) {
        ctx->pc = 0x15D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D20Cu;
        // 0x15d210: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D214u;
        goto label_15d214;
    }
    ctx->pc = 0x15D20Cu;
    SET_GPR_U32(ctx, 31, 0x15D214u);
    ctx->pc = 0x15D210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D20Cu;
    // 0x15d210: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156408u, 0x15D20Cu, 0x15D214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D214u;
label_15d214:
    // 0x15d214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15d214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d218:
    // 0x15d218: 0xc055996  jal         func_156658
label_15d21c:
    if (ctx->pc == 0x15D21Cu) {
        ctx->pc = 0x15D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D218u;
        // 0x15d21c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D220u;
        goto label_15d220;
    }
    ctx->pc = 0x15D218u;
    SET_GPR_U32(ctx, 31, 0x15D220u);
    ctx->pc = 0x15D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D218u;
    // 0x15d21c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156658u, 0x15D218u, 0x15D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D220u;
label_15d220:
    // 0x15d220: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15d220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15d224:
    // 0x15d224: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15d224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15d228:
    // 0x15d228: 0x8c652b04  lw          $a1, 0x2B04($v1)
    ctx->pc = 0x15d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_15d22c:
    // 0x15d22c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15d230:
    // 0x15d230: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15d230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_15d234:
    // 0x15d234: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x15d234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_15d238:
    // 0x15d238: 0x60f809  jalr        $v1
label_15d23c:
    if (ctx->pc == 0x15D23Cu) {
        ctx->pc = 0x15D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D238u;
        // 0x15d23c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D240u;
        goto label_15d240;
    }
    ctx->pc = 0x15D238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D240u);
        ctx->pc = 0x15D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D238u;
        // 0x15d23c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D238u, 0x15D240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D240u;
label_15d240:
    // 0x15d240: 0x8e45cdb4  lw          $a1, -0x324C($s2)
    ctx->pc = 0x15d240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954420)));
label_15d244:
    // 0x15d244: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15d244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15d248:
    // 0x15d248: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15d248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15d24c:
    // 0x15d24c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15d250:
    // 0x15d250: 0x60f809  jalr        $v1
label_15d254:
    if (ctx->pc == 0x15D254u) {
        ctx->pc = 0x15D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D250u;
        // 0x15d254: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D258u;
        goto label_15d258;
    }
    ctx->pc = 0x15D250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D258u);
        ctx->pc = 0x15D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D250u;
        // 0x15d254: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D250u, 0x15D258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D258u;
label_15d258:
    // 0x15d258: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15d258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15d25c:
    // 0x15d25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d260:
    // 0x15d260: 0xc0552b8  jal         func_154AE0
label_15d264:
    if (ctx->pc == 0x15D264u) {
        ctx->pc = 0x15D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D260u;
        // 0x15d264: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D268u;
        goto label_15d268;
    }
    ctx->pc = 0x15D260u;
    SET_GPR_U32(ctx, 31, 0x15D268u);
    ctx->pc = 0x15D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D260u;
    // 0x15d264: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15D260u, 0x15D268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D268u;
label_15d268:
    // 0x15d268: 0xc055880  jal         func_156200
label_15d26c:
    if (ctx->pc == 0x15D26Cu) {
        ctx->pc = 0x15D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D268u;
        // 0x15d26c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D270u;
        goto label_15d270;
    }
    ctx->pc = 0x15D268u;
    SET_GPR_U32(ctx, 31, 0x15D270u);
    ctx->pc = 0x15D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D268u;
    // 0x15d26c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15D268u, 0x15D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D270u;
label_15d270:
    // 0x15d270: 0xc055a70  jal         func_1569C0
label_15d274:
    if (ctx->pc == 0x15D274u) {
        ctx->pc = 0x15D278u;
        goto label_15d278;
    }
    ctx->pc = 0x15D270u;
    SET_GPR_U32(ctx, 31, 0x15D278u);
    ctx->pc = 0x1569C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569C0u, 0x15D270u, 0x15D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D278u;
label_15d278:
    // 0x15d278: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x15d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_15d27c:
    // 0x15d27c: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
label_15d280:
    if (ctx->pc == 0x15D280u) {
        ctx->pc = 0x15D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D27Cu;
        // 0x15d280: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D284u;
        goto label_15d284;
    }
    ctx->pc = 0x15D27Cu;
    {
        const bool branch_taken_0x15d27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D27Cu;
        // 0x15d280: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d27c) {
            ctx->pc = 0x15D3FCu;
            goto label_15d3fc;
        }
    }
    ctx->pc = 0x15D284u;
label_15d284:
    // 0x15d284: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x15d284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_15d288:
    // 0x15d288: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_15d28c:
    if (ctx->pc == 0x15D28Cu) {
        ctx->pc = 0x15D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D288u;
        // 0x15d28c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D290u;
        goto label_15d290;
    }
    ctx->pc = 0x15D288u;
    {
        const bool branch_taken_0x15d288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D288u;
        // 0x15d28c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d288) {
            ctx->pc = 0x15D294u;
            goto label_15d294;
        }
    }
    ctx->pc = 0x15D290u;
label_15d290:
    // 0x15d290: 0xac405db8  sw          $zero, 0x5DB8($v0)
    ctx->pc = 0x15d290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 23992), GPR_U32(ctx, 0));
label_15d294:
    // 0x15d294: 0xc057994  jal         func_15E650
label_15d298:
    if (ctx->pc == 0x15D298u) {
        ctx->pc = 0x15D29Cu;
        goto label_15d29c;
    }
    ctx->pc = 0x15D294u;
    SET_GPR_U32(ctx, 31, 0x15D29Cu);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x15D294u, 0x15D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D29Cu;
label_15d29c:
    // 0x15d29c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_15d2a0:
    // 0x15d2a0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15d2a4:
    // 0x15d2a4: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
label_15d2a8:
    if (ctx->pc == 0x15D2A8u) {
        ctx->pc = 0x15D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2A4u;
        // 0x15d2a8: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2ACu;
        goto label_15d2ac;
    }
    ctx->pc = 0x15D2A4u;
    {
        const bool branch_taken_0x15d2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2A4u;
        // 0x15d2a8: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2a4) {
            ctx->pc = 0x15D2F4u;
            goto label_15d2f4;
        }
    }
    ctx->pc = 0x15D2ACu;
label_15d2ac:
    // 0x15d2ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15d2b0:
    if (ctx->pc == 0x15D2B0u) {
        ctx->pc = 0x15D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2ACu;
        // 0x15d2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2B4u;
        goto label_15d2b4;
    }
    ctx->pc = 0x15D2ACu;
    {
        const bool branch_taken_0x15d2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2ACu;
        // 0x15d2b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2ac) {
            ctx->pc = 0x15D2C4u;
            goto label_15d2c4;
        }
    }
    ctx->pc = 0x15D2B4u;
label_15d2b4:
    // 0x15d2b4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_15d2b8:
    if (ctx->pc == 0x15D2B8u) {
        ctx->pc = 0x15D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2B4u;
        // 0x15d2b8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2BCu;
        goto label_15d2bc;
    }
    ctx->pc = 0x15D2B4u;
    {
        const bool branch_taken_0x15d2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2B4u;
        // 0x15d2b8: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2b4) {
            ctx->pc = 0x15D2D8u;
            goto label_15d2d8;
        }
    }
    ctx->pc = 0x15D2BCu;
label_15d2bc:
    // 0x15d2bc: 0x10000029  b           . + 4 + (0x29 << 2)
label_15d2c0:
    if (ctx->pc == 0x15D2C0u) {
        ctx->pc = 0x15D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2BCu;
        // 0x15d2c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2C4u;
        goto label_15d2c4;
    }
    ctx->pc = 0x15D2BCu;
    {
        const bool branch_taken_0x15d2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2BCu;
        // 0x15d2c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2bc) {
            ctx->pc = 0x15D364u;
            goto label_15d364;
        }
    }
    ctx->pc = 0x15D2C4u;
label_15d2c4:
    // 0x15d2c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15d2c8:
    // 0x15d2c8: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_15d2cc:
    if (ctx->pc == 0x15D2CCu) {
        ctx->pc = 0x15D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2C8u;
        // 0x15d2cc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2D0u;
        goto label_15d2d0;
    }
    ctx->pc = 0x15D2C8u;
    {
        const bool branch_taken_0x15d2c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2C8u;
        // 0x15d2cc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2c8) {
            ctx->pc = 0x15D324u;
            goto label_15d324;
        }
    }
    ctx->pc = 0x15D2D0u;
label_15d2d0:
    // 0x15d2d0: 0x10000024  b           . + 4 + (0x24 << 2)
label_15d2d4:
    if (ctx->pc == 0x15D2D4u) {
        ctx->pc = 0x15D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2D0u;
        // 0x15d2d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2D8u;
        goto label_15d2d8;
    }
    ctx->pc = 0x15D2D0u;
    {
        const bool branch_taken_0x15d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2D0u;
        // 0x15d2d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2d0) {
            ctx->pc = 0x15D364u;
            goto label_15d364;
        }
    }
    ctx->pc = 0x15D2D8u;
label_15d2d8:
    // 0x15d2d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15d2dc:
    // 0x15d2dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d2e0:
    // 0x15d2e0: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x15d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_15d2e4:
    // 0x15d2e4: 0xc1073bc  jal         func_41CEF0
label_15d2e8:
    if (ctx->pc == 0x15D2E8u) {
        ctx->pc = 0x15D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2E4u;
        // 0x15d2e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2ECu;
        goto label_15d2ec;
    }
    ctx->pc = 0x15D2E4u;
    SET_GPR_U32(ctx, 31, 0x15D2ECu);
    ctx->pc = 0x15D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D2E4u;
    // 0x15d2e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x15D2E4u, 0x15D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2ECu;
label_15d2ec:
    // 0x15d2ec: 0x1000001d  b           . + 4 + (0x1D << 2)
label_15d2f0:
    if (ctx->pc == 0x15D2F0u) {
        ctx->pc = 0x15D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2ECu;
        // 0x15d2f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D2F4u;
        goto label_15d2f4;
    }
    ctx->pc = 0x15D2ECu;
    {
        const bool branch_taken_0x15d2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D2ECu;
        // 0x15d2f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d2ec) {
            ctx->pc = 0x15D364u;
            goto label_15d364;
        }
    }
    ctx->pc = 0x15D2F4u;
label_15d2f4:
    // 0x15d2f4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15d2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15d2f8:
    // 0x15d2f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d2fc:
    // 0x15d2fc: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x15d2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_15d300:
    // 0x15d300: 0xc1073bc  jal         func_41CEF0
label_15d304:
    if (ctx->pc == 0x15D304u) {
        ctx->pc = 0x15D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D300u;
        // 0x15d304: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D308u;
        goto label_15d308;
    }
    ctx->pc = 0x15D300u;
    SET_GPR_U32(ctx, 31, 0x15D308u);
    ctx->pc = 0x15D304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D300u;
    // 0x15d304: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x15D300u, 0x15D308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D308u;
label_15d308:
    // 0x15d308: 0x8e05489c  lw          $a1, 0x489C($s0)
    ctx->pc = 0x15d308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_15d30c:
    // 0x15d30c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15d310:
    // 0x15d310: 0x24845d90  addiu       $a0, $a0, 0x5D90
    ctx->pc = 0x15d310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
label_15d314:
    // 0x15d314: 0xc0571ec  jal         func_15C7B0
label_15d318:
    if (ctx->pc == 0x15D318u) {
        ctx->pc = 0x15D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D314u;
        // 0x15d318: 0x24a50124  addiu       $a1, $a1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D31Cu;
        goto label_15d31c;
    }
    ctx->pc = 0x15D314u;
    SET_GPR_U32(ctx, 31, 0x15D31Cu);
    ctx->pc = 0x15D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D314u;
    // 0x15d318: 0x24a50124  addiu       $a1, $a1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7B0u, 0x15D314u, 0x15D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D31Cu;
label_15d31c:
    // 0x15d31c: 0x10000011  b           . + 4 + (0x11 << 2)
label_15d320:
    if (ctx->pc == 0x15D320u) {
        ctx->pc = 0x15D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D31Cu;
        // 0x15d320: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D324u;
        goto label_15d324;
    }
    ctx->pc = 0x15D31Cu;
    {
        const bool branch_taken_0x15d31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D31Cu;
        // 0x15d320: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d31c) {
            ctx->pc = 0x15D364u;
            goto label_15d364;
        }
    }
    ctx->pc = 0x15D324u;
label_15d324:
    // 0x15d324: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15d324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15d328:
    // 0x15d328: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d32c:
    // 0x15d32c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x15d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_15d330:
    // 0x15d330: 0xc1073bc  jal         func_41CEF0
label_15d334:
    if (ctx->pc == 0x15D334u) {
        ctx->pc = 0x15D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D330u;
        // 0x15d334: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D338u;
        goto label_15d338;
    }
    ctx->pc = 0x15D330u;
    SET_GPR_U32(ctx, 31, 0x15D338u);
    ctx->pc = 0x15D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D330u;
    // 0x15d334: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEF0u, 0x15D330u, 0x15D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D338u;
label_15d338:
    // 0x15d338: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x15d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_15d33c:
    // 0x15d33c: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x15d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_15d340:
    // 0x15d340: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15d340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15d344:
    // 0x15d344: 0x944556dc  lhu         $a1, 0x56DC($v0)
    ctx->pc = 0x15d344u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22236)));
label_15d348:
    // 0x15d348: 0x24845d90  addiu       $a0, $a0, 0x5D90
    ctx->pc = 0x15d348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23952));
label_15d34c:
    // 0x15d34c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15d350:
    // 0x15d350: 0xa33018  mult        $a2, $a1, $v1
    ctx->pc = 0x15d350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_15d354:
    // 0x15d354: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_15d358:
    // 0x15d358: 0xc0571ec  jal         func_15C7B0
label_15d35c:
    if (ctx->pc == 0x15D35Cu) {
        ctx->pc = 0x15D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D358u;
        // 0x15d35c: 0x24a514e8  addiu       $a1, $a1, 0x14E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D360u;
        goto label_15d360;
    }
    ctx->pc = 0x15D358u;
    SET_GPR_U32(ctx, 31, 0x15D360u);
    ctx->pc = 0x15D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D358u;
    // 0x15d35c: 0x24a514e8  addiu       $a1, $a1, 0x14E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7B0u, 0x15D358u, 0x15D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D360u;
label_15d360:
    // 0x15d360: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15d364:
    // 0x15d364: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15d364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15d368:
    // 0x15d368: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15d36c:
    // 0x15d36c: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x15d36cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_15d370:
    // 0x15d370: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x15d370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_15d374:
    // 0x15d374: 0x40f809  jalr        $v0
label_15d378:
    if (ctx->pc == 0x15D378u) {
        ctx->pc = 0x15D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D374u;
        // 0x15d378: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D37Cu;
        goto label_15d37c;
    }
    ctx->pc = 0x15D374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D37Cu);
        ctx->pc = 0x15D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D374u;
        // 0x15d378: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D374u, 0x15D37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D37Cu;
label_15d37c:
    // 0x15d37c: 0xc0579c6  jal         func_15E718
label_15d380:
    if (ctx->pc == 0x15D380u) {
        ctx->pc = 0x15D384u;
        goto label_15d384;
    }
    ctx->pc = 0x15D37Cu;
    SET_GPR_U32(ctx, 31, 0x15D384u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x15D37Cu, 0x15D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D384u;
label_15d384:
    // 0x15d384: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_15d388:
    // 0x15d388: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x15d388u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_15d38c:
    // 0x15d38c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_15d390:
    // 0x15d390: 0xa0f809  jalr        $a1
label_15d394:
    if (ctx->pc == 0x15D394u) {
        ctx->pc = 0x15D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D390u;
        // 0x15d394: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D398u;
        goto label_15d398;
    }
    ctx->pc = 0x15D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x15D398u);
        ctx->pc = 0x15D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D390u;
        // 0x15d394: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D390u, 0x15D398u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D398u;
label_15d398:
    // 0x15d398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15d398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d39c:
    // 0x15d39c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_15d3a0:
    if (ctx->pc == 0x15D3A0u) {
        ctx->pc = 0x15D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D39Cu;
        // 0x15d3a0: 0x8e30489c  lw          $s0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3A4u;
        goto label_15d3a4;
    }
    ctx->pc = 0x15D39Cu;
    {
        const bool branch_taken_0x15d39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D39Cu;
        // 0x15d3a0: 0x8e30489c  lw          $s0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d39c) {
            ctx->pc = 0x15D3B0u;
            goto label_15d3b0;
        }
    }
    ctx->pc = 0x15D3A4u;
label_15d3a4:
    // 0x15d3a4: 0xc057994  jal         func_15E650
label_15d3a8:
    if (ctx->pc == 0x15D3A8u) {
        ctx->pc = 0x15D3ACu;
        goto label_15d3ac;
    }
    ctx->pc = 0x15D3A4u;
    SET_GPR_U32(ctx, 31, 0x15D3ACu);
    ctx->pc = 0x15E650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E650u, 0x15D3A4u, 0x15D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3ACu;
label_15d3ac:
    // 0x15d3ac: 0x8e30489c  lw          $s0, 0x489C($s1)
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_15d3b0:
    // 0x15d3b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15d3b4:
    // 0x15d3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15d3b8:
    // 0x15d3b8: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_15d3bc:
    // 0x15d3bc: 0xc107908  jal         func_41E420
label_15d3c0:
    if (ctx->pc == 0x15D3C0u) {
        ctx->pc = 0x15D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3BCu;
        // 0x15d3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3C4u;
        goto label_15d3c4;
    }
    ctx->pc = 0x15D3BCu;
    SET_GPR_U32(ctx, 31, 0x15D3C4u);
    ctx->pc = 0x15D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D3BCu;
    // 0x15d3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x15D3BCu, 0x15D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3C4u;
label_15d3c4:
    // 0x15d3c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d3c8:
    // 0x15d3c8: 0xc1078e6  jal         func_41E398
label_15d3cc:
    if (ctx->pc == 0x15D3CCu) {
        ctx->pc = 0x15D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3C8u;
        // 0x15d3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3D0u;
        goto label_15d3d0;
    }
    ctx->pc = 0x15D3C8u;
    SET_GPR_U32(ctx, 31, 0x15D3D0u);
    ctx->pc = 0x15D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D3C8u;
    // 0x15d3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E398u, 0x15D3C8u, 0x15D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3D0u;
label_15d3d0:
    // 0x15d3d0: 0x8e30489c  lw          $s0, 0x489C($s1)
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_15d3d4:
    // 0x15d3d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15d3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15d3d8:
    // 0x15d3d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d3dc:
    // 0x15d3dc: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x15d3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_15d3e0:
    // 0x15d3e0: 0xc107908  jal         func_41E420
label_15d3e4:
    if (ctx->pc == 0x15D3E4u) {
        ctx->pc = 0x15D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3E0u;
        // 0x15d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3E8u;
        goto label_15d3e8;
    }
    ctx->pc = 0x15D3E0u;
    SET_GPR_U32(ctx, 31, 0x15D3E8u);
    ctx->pc = 0x15D3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D3E0u;
    // 0x15d3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x15D3E0u, 0x15D3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3E8u;
label_15d3e8:
    // 0x15d3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d3ec:
    // 0x15d3ec: 0xc1078e6  jal         func_41E398
label_15d3f0:
    if (ctx->pc == 0x15D3F0u) {
        ctx->pc = 0x15D3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D3ECu;
        // 0x15d3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D3F4u;
        goto label_15d3f4;
    }
    ctx->pc = 0x15D3ECu;
    SET_GPR_U32(ctx, 31, 0x15D3F4u);
    ctx->pc = 0x15D3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D3ECu;
    // 0x15d3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E398u, 0x15D3ECu, 0x15D3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3F4u;
label_15d3f4:
    // 0x15d3f4: 0xc0554c2  jal         func_155308
label_15d3f8:
    if (ctx->pc == 0x15D3F8u) {
        ctx->pc = 0x15D3FCu;
        goto label_15d3fc;
    }
    ctx->pc = 0x15D3F4u;
    SET_GPR_U32(ctx, 31, 0x15D3FCu);
    ctx->pc = 0x155308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155308u, 0x15D3F4u, 0x15D3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3FCu;
label_15d3fc:
    // 0x15d3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d400:
    // 0x15d400: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15d400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15d404:
    // 0x15d404: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15d404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15d408:
    // 0x15d408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15d40c:
    // 0x15d40c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15d40cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15d410:
    // 0x15d410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d414:
    // 0x15d414: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15d414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15d418:
    // 0x15d418: 0x3e00008  jr          $ra
label_15d41c:
    if (ctx->pc == 0x15D41Cu) {
        ctx->pc = 0x15D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D418u;
        // 0x15d41c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D420u;
        goto label_fallthrough_0x15d418;
    }
    ctx->pc = 0x15D418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D418u;
        // 0x15d41c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15d418:
    ctx->pc = 0x15D420u;
}
