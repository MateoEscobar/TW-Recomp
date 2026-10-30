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

// Function: sub_0038D188
// Address: 0x38d188 - 0x38d528
void sub_0038D188_0x38d188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D188_0x38d188");
#endif

    switch (ctx->pc) {
        case 0x38d188u: goto label_38d188;
        case 0x38d18cu: goto label_38d18c;
        case 0x38d190u: goto label_38d190;
        case 0x38d194u: goto label_38d194;
        case 0x38d198u: goto label_38d198;
        case 0x38d19cu: goto label_38d19c;
        case 0x38d1a0u: goto label_38d1a0;
        case 0x38d1a4u: goto label_38d1a4;
        case 0x38d1a8u: goto label_38d1a8;
        case 0x38d1acu: goto label_38d1ac;
        case 0x38d1b0u: goto label_38d1b0;
        case 0x38d1b4u: goto label_38d1b4;
        case 0x38d1b8u: goto label_38d1b8;
        case 0x38d1bcu: goto label_38d1bc;
        case 0x38d1c0u: goto label_38d1c0;
        case 0x38d1c4u: goto label_38d1c4;
        case 0x38d1c8u: goto label_38d1c8;
        case 0x38d1ccu: goto label_38d1cc;
        case 0x38d1d0u: goto label_38d1d0;
        case 0x38d1d4u: goto label_38d1d4;
        case 0x38d1d8u: goto label_38d1d8;
        case 0x38d1dcu: goto label_38d1dc;
        case 0x38d1e0u: goto label_38d1e0;
        case 0x38d1e4u: goto label_38d1e4;
        case 0x38d1e8u: goto label_38d1e8;
        case 0x38d1ecu: goto label_38d1ec;
        case 0x38d1f0u: goto label_38d1f0;
        case 0x38d1f4u: goto label_38d1f4;
        case 0x38d1f8u: goto label_38d1f8;
        case 0x38d1fcu: goto label_38d1fc;
        case 0x38d200u: goto label_38d200;
        case 0x38d204u: goto label_38d204;
        case 0x38d208u: goto label_38d208;
        case 0x38d20cu: goto label_38d20c;
        case 0x38d210u: goto label_38d210;
        case 0x38d214u: goto label_38d214;
        case 0x38d218u: goto label_38d218;
        case 0x38d21cu: goto label_38d21c;
        case 0x38d220u: goto label_38d220;
        case 0x38d224u: goto label_38d224;
        case 0x38d228u: goto label_38d228;
        case 0x38d22cu: goto label_38d22c;
        case 0x38d230u: goto label_38d230;
        case 0x38d234u: goto label_38d234;
        case 0x38d238u: goto label_38d238;
        case 0x38d23cu: goto label_38d23c;
        case 0x38d240u: goto label_38d240;
        case 0x38d244u: goto label_38d244;
        case 0x38d248u: goto label_38d248;
        case 0x38d24cu: goto label_38d24c;
        case 0x38d250u: goto label_38d250;
        case 0x38d254u: goto label_38d254;
        case 0x38d258u: goto label_38d258;
        case 0x38d25cu: goto label_38d25c;
        case 0x38d260u: goto label_38d260;
        case 0x38d264u: goto label_38d264;
        case 0x38d268u: goto label_38d268;
        case 0x38d26cu: goto label_38d26c;
        case 0x38d270u: goto label_38d270;
        case 0x38d274u: goto label_38d274;
        case 0x38d278u: goto label_38d278;
        case 0x38d27cu: goto label_38d27c;
        case 0x38d280u: goto label_38d280;
        case 0x38d284u: goto label_38d284;
        case 0x38d288u: goto label_38d288;
        case 0x38d28cu: goto label_38d28c;
        case 0x38d290u: goto label_38d290;
        case 0x38d294u: goto label_38d294;
        case 0x38d298u: goto label_38d298;
        case 0x38d29cu: goto label_38d29c;
        case 0x38d2a0u: goto label_38d2a0;
        case 0x38d2a4u: goto label_38d2a4;
        case 0x38d2a8u: goto label_38d2a8;
        case 0x38d2acu: goto label_38d2ac;
        case 0x38d2b0u: goto label_38d2b0;
        case 0x38d2b4u: goto label_38d2b4;
        case 0x38d2b8u: goto label_38d2b8;
        case 0x38d2bcu: goto label_38d2bc;
        case 0x38d2c0u: goto label_38d2c0;
        case 0x38d2c4u: goto label_38d2c4;
        case 0x38d2c8u: goto label_38d2c8;
        case 0x38d2ccu: goto label_38d2cc;
        case 0x38d2d0u: goto label_38d2d0;
        case 0x38d2d4u: goto label_38d2d4;
        case 0x38d2d8u: goto label_38d2d8;
        case 0x38d2dcu: goto label_38d2dc;
        case 0x38d2e0u: goto label_38d2e0;
        case 0x38d2e4u: goto label_38d2e4;
        case 0x38d2e8u: goto label_38d2e8;
        case 0x38d2ecu: goto label_38d2ec;
        case 0x38d2f0u: goto label_38d2f0;
        case 0x38d2f4u: goto label_38d2f4;
        case 0x38d2f8u: goto label_38d2f8;
        case 0x38d2fcu: goto label_38d2fc;
        case 0x38d300u: goto label_38d300;
        case 0x38d304u: goto label_38d304;
        case 0x38d308u: goto label_38d308;
        case 0x38d30cu: goto label_38d30c;
        case 0x38d310u: goto label_38d310;
        case 0x38d314u: goto label_38d314;
        case 0x38d318u: goto label_38d318;
        case 0x38d31cu: goto label_38d31c;
        case 0x38d320u: goto label_38d320;
        case 0x38d324u: goto label_38d324;
        case 0x38d328u: goto label_38d328;
        case 0x38d32cu: goto label_38d32c;
        case 0x38d330u: goto label_38d330;
        case 0x38d334u: goto label_38d334;
        case 0x38d338u: goto label_38d338;
        case 0x38d33cu: goto label_38d33c;
        case 0x38d340u: goto label_38d340;
        case 0x38d344u: goto label_38d344;
        case 0x38d348u: goto label_38d348;
        case 0x38d34cu: goto label_38d34c;
        case 0x38d350u: goto label_38d350;
        case 0x38d354u: goto label_38d354;
        case 0x38d358u: goto label_38d358;
        case 0x38d35cu: goto label_38d35c;
        case 0x38d360u: goto label_38d360;
        case 0x38d364u: goto label_38d364;
        case 0x38d368u: goto label_38d368;
        case 0x38d36cu: goto label_38d36c;
        case 0x38d370u: goto label_38d370;
        case 0x38d374u: goto label_38d374;
        case 0x38d378u: goto label_38d378;
        case 0x38d37cu: goto label_38d37c;
        case 0x38d380u: goto label_38d380;
        case 0x38d384u: goto label_38d384;
        case 0x38d388u: goto label_38d388;
        case 0x38d38cu: goto label_38d38c;
        case 0x38d390u: goto label_38d390;
        case 0x38d394u: goto label_38d394;
        case 0x38d398u: goto label_38d398;
        case 0x38d39cu: goto label_38d39c;
        case 0x38d3a0u: goto label_38d3a0;
        case 0x38d3a4u: goto label_38d3a4;
        case 0x38d3a8u: goto label_38d3a8;
        case 0x38d3acu: goto label_38d3ac;
        case 0x38d3b0u: goto label_38d3b0;
        case 0x38d3b4u: goto label_38d3b4;
        case 0x38d3b8u: goto label_38d3b8;
        case 0x38d3bcu: goto label_38d3bc;
        case 0x38d3c0u: goto label_38d3c0;
        case 0x38d3c4u: goto label_38d3c4;
        case 0x38d3c8u: goto label_38d3c8;
        case 0x38d3ccu: goto label_38d3cc;
        case 0x38d3d0u: goto label_38d3d0;
        case 0x38d3d4u: goto label_38d3d4;
        case 0x38d3d8u: goto label_38d3d8;
        case 0x38d3dcu: goto label_38d3dc;
        case 0x38d3e0u: goto label_38d3e0;
        case 0x38d3e4u: goto label_38d3e4;
        case 0x38d3e8u: goto label_38d3e8;
        case 0x38d3ecu: goto label_38d3ec;
        case 0x38d3f0u: goto label_38d3f0;
        case 0x38d3f4u: goto label_38d3f4;
        case 0x38d3f8u: goto label_38d3f8;
        case 0x38d3fcu: goto label_38d3fc;
        case 0x38d400u: goto label_38d400;
        case 0x38d404u: goto label_38d404;
        case 0x38d408u: goto label_38d408;
        case 0x38d40cu: goto label_38d40c;
        case 0x38d410u: goto label_38d410;
        case 0x38d414u: goto label_38d414;
        case 0x38d418u: goto label_38d418;
        case 0x38d41cu: goto label_38d41c;
        case 0x38d420u: goto label_38d420;
        case 0x38d424u: goto label_38d424;
        case 0x38d428u: goto label_38d428;
        case 0x38d42cu: goto label_38d42c;
        case 0x38d430u: goto label_38d430;
        case 0x38d434u: goto label_38d434;
        case 0x38d438u: goto label_38d438;
        case 0x38d43cu: goto label_38d43c;
        case 0x38d440u: goto label_38d440;
        case 0x38d444u: goto label_38d444;
        case 0x38d448u: goto label_38d448;
        case 0x38d44cu: goto label_38d44c;
        case 0x38d450u: goto label_38d450;
        case 0x38d454u: goto label_38d454;
        case 0x38d458u: goto label_38d458;
        case 0x38d45cu: goto label_38d45c;
        case 0x38d460u: goto label_38d460;
        case 0x38d464u: goto label_38d464;
        case 0x38d468u: goto label_38d468;
        case 0x38d46cu: goto label_38d46c;
        case 0x38d470u: goto label_38d470;
        case 0x38d474u: goto label_38d474;
        case 0x38d478u: goto label_38d478;
        case 0x38d47cu: goto label_38d47c;
        case 0x38d480u: goto label_38d480;
        case 0x38d484u: goto label_38d484;
        case 0x38d488u: goto label_38d488;
        case 0x38d48cu: goto label_38d48c;
        case 0x38d490u: goto label_38d490;
        case 0x38d494u: goto label_38d494;
        case 0x38d498u: goto label_38d498;
        case 0x38d49cu: goto label_38d49c;
        case 0x38d4a0u: goto label_38d4a0;
        case 0x38d4a4u: goto label_38d4a4;
        case 0x38d4a8u: goto label_38d4a8;
        case 0x38d4acu: goto label_38d4ac;
        case 0x38d4b0u: goto label_38d4b0;
        case 0x38d4b4u: goto label_38d4b4;
        case 0x38d4b8u: goto label_38d4b8;
        case 0x38d4bcu: goto label_38d4bc;
        case 0x38d4c0u: goto label_38d4c0;
        case 0x38d4c4u: goto label_38d4c4;
        case 0x38d4c8u: goto label_38d4c8;
        case 0x38d4ccu: goto label_38d4cc;
        case 0x38d4d0u: goto label_38d4d0;
        case 0x38d4d4u: goto label_38d4d4;
        case 0x38d4d8u: goto label_38d4d8;
        case 0x38d4dcu: goto label_38d4dc;
        case 0x38d4e0u: goto label_38d4e0;
        case 0x38d4e4u: goto label_38d4e4;
        case 0x38d4e8u: goto label_38d4e8;
        case 0x38d4ecu: goto label_38d4ec;
        case 0x38d4f0u: goto label_38d4f0;
        case 0x38d4f4u: goto label_38d4f4;
        case 0x38d4f8u: goto label_38d4f8;
        case 0x38d4fcu: goto label_38d4fc;
        case 0x38d500u: goto label_38d500;
        case 0x38d504u: goto label_38d504;
        case 0x38d508u: goto label_38d508;
        case 0x38d50cu: goto label_38d50c;
        case 0x38d510u: goto label_38d510;
        case 0x38d514u: goto label_38d514;
        case 0x38d518u: goto label_38d518;
        case 0x38d51cu: goto label_38d51c;
        case 0x38d520u: goto label_38d520;
        case 0x38d524u: goto label_38d524;
        default: break;
    }

    ctx->pc = 0x38d188u;

label_38d188:
    // 0x38d188: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x38d188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_38d18c:
    // 0x38d18c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x38d18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_38d190:
    // 0x38d190: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x38d190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_38d194:
    // 0x38d194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38d194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d198:
    // 0x38d198: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x38d198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_38d19c:
    // 0x38d19c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x38d19cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_38d1a0:
    // 0x38d1a0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x38d1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_38d1a4:
    // 0x38d1a4: 0x8e49bd30  lw          $t1, -0x42D0($s2)
    ctx->pc = 0x38d1a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_38d1a8:
    // 0x38d1a8: 0x8e22120c  lw          $v0, 0x120C($s1)
    ctx->pc = 0x38d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4620)));
label_38d1ac:
    // 0x38d1ac: 0x10490060  beq         $v0, $t1, . + 4 + (0x60 << 2)
label_38d1b0:
    if (ctx->pc == 0x38D1B0u) {
        ctx->pc = 0x38D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1ACu;
        // 0x38d1b0: 0x2624120c  addiu       $a0, $s1, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D1B4u;
        goto label_38d1b4;
    }
    ctx->pc = 0x38D1ACu;
    {
        const bool branch_taken_0x38d1ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x38D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1ACu;
        // 0x38d1b0: 0x2624120c  addiu       $a0, $s1, 0x120C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4620));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d1ac) {
            ctx->pc = 0x38D330u;
            goto label_38d330;
        }
    }
    ctx->pc = 0x38D1B4u;
label_38d1b4:
    // 0x38d1b4: 0xc0e4080  jal         func_390200
label_38d1b8:
    if (ctx->pc == 0x38D1B8u) {
        ctx->pc = 0x38D1BCu;
        goto label_38d1bc;
    }
    ctx->pc = 0x38D1B4u;
    SET_GPR_U32(ctx, 31, 0x38D1BCu);
    ctx->pc = 0x390200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390200u, 0x38D1B4u, 0x38D1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D1BCu;
label_38d1bc:
    // 0x38d1bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38d1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d1c0:
    // 0x38d1c0: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_38d1c4:
    if (ctx->pc == 0x38D1C4u) {
        ctx->pc = 0x38D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1C0u;
        // 0x38d1c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D1C8u;
        goto label_38d1c8;
    }
    ctx->pc = 0x38D1C0u;
    {
        const bool branch_taken_0x38d1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1C0u;
        // 0x38d1c4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d1c0) {
            ctx->pc = 0x38D324u;
            goto label_38d324;
        }
    }
    ctx->pc = 0x38D1C8u;
label_38d1c8:
    // 0x38d1c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d1cc:
    // 0x38d1cc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38d1ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38d1d0:
    // 0x38d1d0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38d1d4:
    // 0x38d1d4: 0x60f809  jalr        $v1
label_38d1d8:
    if (ctx->pc == 0x38D1D8u) {
        ctx->pc = 0x38D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1D4u;
        // 0x38d1d8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D1DCu;
        goto label_38d1dc;
    }
    ctx->pc = 0x38D1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38D1DCu);
        ctx->pc = 0x38D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D1D4u;
        // 0x38d1d8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D1D4u, 0x38D1DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D1DCu;
label_38d1dc:
    // 0x38d1dc: 0x8e2511e0  lw          $a1, 0x11E0($s1)
    ctx->pc = 0x38d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_38d1e0:
    // 0x38d1e0: 0x240605f0  addiu       $a2, $zero, 0x5F0
    ctx->pc = 0x38d1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_38d1e4:
    // 0x38d1e4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x38d1e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38d1e8:
    // 0x38d1e8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x38d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_38d1ec:
    // 0x38d1ec: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x38d1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38d1f0:
    // 0x38d1f0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x38d1f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38d1f4:
    // 0x38d1f4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38d1f8:
    // 0x38d1f8: 0x2484e4b0  addiu       $a0, $a0, -0x1B50
    ctx->pc = 0x38d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
label_38d1fc:
    // 0x38d1fc: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x38d1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_38d200:
    // 0x38d200: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38d204:
    // 0x38d204: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x38d204u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_38d208:
    // 0x38d208: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38d208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_38d20c:
    // 0x38d20c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38d20cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38d210:
    // 0x38d210: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38d210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38d214:
    // 0x38d214: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38d214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d218:
    // 0x38d218: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x38d218u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38d21c:
    // 0x38d21c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x38d21cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38d220:
    // 0x38d220: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38d220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d224:
    // 0x38d224: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x38d224u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d228:
    // 0x38d228: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x38d228u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38d22c:
    // 0x38d22c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38d22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d230:
    // 0x38d230: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x38d230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38d234:
    // 0x38d234: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x38d234u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38d238:
    // 0x38d238: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x38d238u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d23c:
    // 0x38d23c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x38d23cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38d240:
    // 0x38d240: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x38d240u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d244:
    // 0x38d244: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x38d244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d248:
    // 0x38d248: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x38d248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d24c:
    // 0x38d24c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x38d24cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_38d250:
    // 0x38d250: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x38d250u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_38d254:
    // 0x38d254: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38d254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38d258:
    // 0x38d258: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38d25c:
    // 0x38d25c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38d25cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38d260:
    // 0x38d260: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x38d260u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_38d264:
    // 0x38d264: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38d264u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38d268:
    // 0x38d268: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38d268u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38d26c:
    // 0x38d26c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x38d26cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_38d270:
    // 0x38d270: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38d274:
    // 0x38d274: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38d274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d278:
    // 0x38d278: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x38d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_38d27c:
    // 0x38d27c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x38d27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_38d280:
    // 0x38d280: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x38d280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_38d284:
    // 0x38d284: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x38d284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_38d288:
    // 0x38d288: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x38d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_38d28c:
    // 0x38d28c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d290:
    // 0x38d290: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x38d290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_38d294:
    // 0x38d294: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x38d294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_38d298:
    // 0x38d298: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x38d298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_38d29c:
    // 0x38d29c: 0xc0f809  jalr        $a2
label_38d2a0:
    if (ctx->pc == 0x38D2A0u) {
        ctx->pc = 0x38D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D29Cu;
        // 0x38d2a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2A4u;
        goto label_38d2a4;
    }
    ctx->pc = 0x38D29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38D2A4u);
        ctx->pc = 0x38D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D29Cu;
        // 0x38d2a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D29Cu, 0x38D2A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D2A4u;
label_38d2a4:
    // 0x38d2a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d2a8:
    // 0x38d2a8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38d2a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38d2ac:
    // 0x38d2ac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38d2b0:
    // 0x38d2b0: 0x40f809  jalr        $v0
label_38d2b4:
    if (ctx->pc == 0x38D2B4u) {
        ctx->pc = 0x38D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2B0u;
        // 0x38d2b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2B8u;
        goto label_38d2b8;
    }
    ctx->pc = 0x38D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D2B8u);
        ctx->pc = 0x38D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2B0u;
        // 0x38d2b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D2B0u, 0x38D2B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D2B8u;
label_38d2b8:
    // 0x38d2b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_38d2bc:
    if (ctx->pc == 0x38D2BCu) {
        ctx->pc = 0x38D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2B8u;
        // 0x38d2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2C0u;
        goto label_38d2c0;
    }
    ctx->pc = 0x38D2B8u;
    {
        const bool branch_taken_0x38d2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2B8u;
        // 0x38d2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d2b8) {
            ctx->pc = 0x38D314u;
            goto label_38d314;
        }
    }
    ctx->pc = 0x38D2C0u;
label_38d2c0:
    // 0x38d2c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d2c4:
    // 0x38d2c4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38d2c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38d2c8:
    // 0x38d2c8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38d2cc:
    // 0x38d2cc: 0x40f809  jalr        $v0
label_38d2d0:
    if (ctx->pc == 0x38D2D0u) {
        ctx->pc = 0x38D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2CCu;
        // 0x38d2d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2D4u;
        goto label_38d2d4;
    }
    ctx->pc = 0x38D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D2D4u);
        ctx->pc = 0x38D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2CCu;
        // 0x38d2d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D2CCu, 0x38D2D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D2D4u;
label_38d2d4:
    // 0x38d2d4: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x38d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_38d2d8:
    // 0x38d2d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38d2dc:
    // 0x38d2dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38d2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38d2e0:
    // 0x38d2e0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x38d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_38d2e4:
    // 0x38d2e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d2e8:
    // 0x38d2e8: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x38d2e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_38d2ec:
    // 0x38d2ec: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x38d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_38d2f0:
    // 0x38d2f0: 0x40f809  jalr        $v0
label_38d2f4:
    if (ctx->pc == 0x38D2F4u) {
        ctx->pc = 0x38D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2F0u;
        // 0x38d2f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D2F8u;
        goto label_38d2f8;
    }
    ctx->pc = 0x38D2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D2F8u);
        ctx->pc = 0x38D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D2F0u;
        // 0x38d2f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D2F0u, 0x38D2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D2F8u;
label_38d2f8:
    // 0x38d2f8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x38d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_38d2fc:
    // 0x38d2fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d300:
    // 0x38d300: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x38d300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38d304:
    // 0x38d304: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x38d304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38d308:
    // 0x38d308: 0xc0f809  jalr        $a2
label_38d30c:
    if (ctx->pc == 0x38D30Cu) {
        ctx->pc = 0x38D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D308u;
        // 0x38d30c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D310u;
        goto label_38d310;
    }
    ctx->pc = 0x38D308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38D310u);
        ctx->pc = 0x38D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D308u;
        // 0x38d30c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D308u, 0x38D310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D310u;
label_38d310:
    // 0x38d310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d314:
    // 0x38d314: 0xc0e858c  jal         func_3A1630
label_38d318:
    if (ctx->pc == 0x38D318u) {
        ctx->pc = 0x38D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D314u;
        // 0x38d318: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D31Cu;
        goto label_38d31c;
    }
    ctx->pc = 0x38D314u;
    SET_GPR_U32(ctx, 31, 0x38D31Cu);
    ctx->pc = 0x38D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D314u;
    // 0x38d318: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38D314u, 0x38D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D31Cu;
label_38d31c:
    // 0x38d31c: 0x1000007c  b           . + 4 + (0x7C << 2)
label_38d320:
    if (ctx->pc == 0x38D320u) {
        ctx->pc = 0x38D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D31Cu;
        // 0x38d320: 0xa22012e4  sb          $zero, 0x12E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4836), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D324u;
        goto label_38d324;
    }
    ctx->pc = 0x38D31Cu;
    {
        const bool branch_taken_0x38d31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D31Cu;
        // 0x38d320: 0xa22012e4  sb          $zero, 0x12E4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4836), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d31c) {
            ctx->pc = 0x38D510u;
            goto label_38d510;
        }
    }
    ctx->pc = 0x38D324u;
label_38d324:
    // 0x38d324: 0x8e42bd30  lw          $v0, -0x42D0($s2)
    ctx->pc = 0x38d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950192)));
label_38d328:
    // 0x38d328: 0x10000078  b           . + 4 + (0x78 << 2)
label_38d32c:
    if (ctx->pc == 0x38D32Cu) {
        ctx->pc = 0x38D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D328u;
        // 0x38d32c: 0xae22120c  sw          $v0, 0x120C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D330u;
        goto label_38d330;
    }
    ctx->pc = 0x38D328u;
    {
        const bool branch_taken_0x38d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D328u;
        // 0x38d32c: 0xae22120c  sw          $v0, 0x120C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d328) {
            ctx->pc = 0x38D50Cu;
            goto label_38d50c;
        }
    }
    ctx->pc = 0x38D330u;
label_38d330:
    // 0x38d330: 0x922212e5  lbu         $v0, 0x12E5($s1)
    ctx->pc = 0x38d330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4837)));
label_38d334:
    // 0x38d334: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_38d338:
    if (ctx->pc == 0x38D338u) {
        ctx->pc = 0x38D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D334u;
        // 0x38d338: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D33Cu;
        goto label_38d33c;
    }
    ctx->pc = 0x38D334u;
    {
        const bool branch_taken_0x38d334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D334u;
        // 0x38d338: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d334) {
            ctx->pc = 0x38D50Cu;
            goto label_38d50c;
        }
    }
    ctx->pc = 0x38D33Cu;
label_38d33c:
    // 0x38d33c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x38d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_38d340:
    // 0x38d340: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x38d340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_38d344:
    // 0x38d344: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38d344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_38d348:
    // 0x38d348: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x38d348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_38d34c:
    // 0x38d34c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x38d34cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_38d350:
    // 0x38d350: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x38d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_38d354:
    // 0x38d354: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x38d354u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_38d358:
    // 0x38d358: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x38d358u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_38d35c:
    // 0x38d35c: 0x24c6e3d8  addiu       $a2, $a2, -0x1C28
    ctx->pc = 0x38d35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960088));
label_38d360:
    // 0x38d360: 0x24e716c0  addiu       $a3, $a3, 0x16C0
    ctx->pc = 0x38d360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5824));
label_38d364:
    // 0x38d364: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x38d364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
label_38d368:
    // 0x38d368: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38d368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_38d36c:
    // 0x38d36c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38d36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d370:
    // 0x38d370: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x38d370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_38d374:
    // 0x38d374: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x38d374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_38d378:
    // 0x38d378: 0xc0e6250  jal         func_398940
label_38d37c:
    if (ctx->pc == 0x38D37Cu) {
        ctx->pc = 0x38D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D378u;
        // 0x38d37c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D380u;
        goto label_38d380;
    }
    ctx->pc = 0x38D378u;
    SET_GPR_U32(ctx, 31, 0x38D380u);
    ctx->pc = 0x38D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D378u;
    // 0x38d37c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x38D378u, 0x38D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D380u;
label_38d380:
    // 0x38d380: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x38d380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_38d384:
    // 0x38d384: 0xc0e4060  jal         func_390180
label_38d388:
    if (ctx->pc == 0x38D388u) {
        ctx->pc = 0x38D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D384u;
        // 0x38d388: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D38Cu;
        goto label_38d38c;
    }
    ctx->pc = 0x38D384u;
    SET_GPR_U32(ctx, 31, 0x38D38Cu);
    ctx->pc = 0x38D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D384u;
    // 0x38d388: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38D384u, 0x38D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D38Cu;
label_38d38c:
    // 0x38d38c: 0xc0e57ce  jal         func_395F38
label_38d390:
    if (ctx->pc == 0x38D390u) {
        ctx->pc = 0x38D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D38Cu;
        // 0x38d390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D394u;
        goto label_38d394;
    }
    ctx->pc = 0x38D38Cu;
    SET_GPR_U32(ctx, 31, 0x38D394u);
    ctx->pc = 0x38D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D38Cu;
    // 0x38d390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38D38Cu, 0x38D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D394u;
label_38d394:
    // 0x38d394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38d394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38d398:
    // 0x38d398: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
label_38d39c:
    if (ctx->pc == 0x38D39Cu) {
        ctx->pc = 0x38D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D398u;
        // 0x38d39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3A0u;
        goto label_38d3a0;
    }
    ctx->pc = 0x38D398u;
    {
        const bool branch_taken_0x38d398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D398u;
        // 0x38d39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d398) {
            ctx->pc = 0x38D50Cu;
            goto label_38d50c;
        }
    }
    ctx->pc = 0x38D3A0u;
label_38d3a0:
    // 0x38d3a0: 0x922212e5  lbu         $v0, 0x12E5($s1)
    ctx->pc = 0x38d3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4837)));
label_38d3a4:
    // 0x38d3a4: 0x24053a98  addiu       $a1, $zero, 0x3A98
    ctx->pc = 0x38d3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15000));
label_38d3a8:
    // 0x38d3a8: 0xc0e5748  jal         func_395D20
label_38d3ac:
    if (ctx->pc == 0x38D3ACu) {
        ctx->pc = 0x38D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3A8u;
        // 0x38d3ac: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3B0u;
        goto label_38d3b0;
    }
    ctx->pc = 0x38D3A8u;
    SET_GPR_U32(ctx, 31, 0x38D3B0u);
    ctx->pc = 0x38D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D3A8u;
    // 0x38d3ac: 0xae020124  sw          $v0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x38D3A8u, 0x38D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D3B0u;
label_38d3b0:
    // 0x38d3b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d3b4:
    // 0x38d3b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x38d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_38d3b8:
    // 0x38d3b8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38d3b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38d3bc:
    // 0x38d3bc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38d3c0:
    // 0x38d3c0: 0x60f809  jalr        $v1
label_38d3c4:
    if (ctx->pc == 0x38D3C4u) {
        ctx->pc = 0x38D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3C0u;
        // 0x38d3c4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D3C8u;
        goto label_38d3c8;
    }
    ctx->pc = 0x38D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38D3C8u);
        ctx->pc = 0x38D3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D3C0u;
        // 0x38d3c4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D3C0u, 0x38D3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D3C8u;
label_38d3c8:
    // 0x38d3c8: 0x8e2511e0  lw          $a1, 0x11E0($s1)
    ctx->pc = 0x38d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_38d3cc:
    // 0x38d3cc: 0x240605f0  addiu       $a2, $zero, 0x5F0
    ctx->pc = 0x38d3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_38d3d0:
    // 0x38d3d0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x38d3d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38d3d4:
    // 0x38d3d4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x38d3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_38d3d8:
    // 0x38d3d8: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x38d3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_38d3dc:
    // 0x38d3dc: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x38d3dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38d3e0:
    // 0x38d3e0: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38d3e4:
    // 0x38d3e4: 0x2484e4b0  addiu       $a0, $a0, -0x1B50
    ctx->pc = 0x38d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960304));
label_38d3e8:
    // 0x38d3e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x38d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_38d3ec:
    // 0x38d3ec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_38d3f0:
    // 0x38d3f0: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x38d3f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_38d3f4:
    // 0x38d3f4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x38d3f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_38d3f8:
    // 0x38d3f8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38d3f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38d3fc:
    // 0x38d3fc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x38d3fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38d400:
    // 0x38d400: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x38d400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d404:
    // 0x38d404: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x38d404u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38d408:
    // 0x38d408: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x38d408u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38d40c:
    // 0x38d40c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x38d40cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d410:
    // 0x38d410: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x38d410u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d414:
    // 0x38d414: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x38d414u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38d418:
    // 0x38d418: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x38d418u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d41c:
    // 0x38d41c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x38d41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_38d420:
    // 0x38d420: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x38d420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38d424:
    // 0x38d424: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x38d424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d428:
    // 0x38d428: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x38d428u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_38d42c:
    // 0x38d42c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x38d42cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_38d430:
    // 0x38d430: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x38d430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d434:
    // 0x38d434: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x38d434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_38d438:
    // 0x38d438: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x38d438u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_38d43c:
    // 0x38d43c: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x38d43cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_38d440:
    // 0x38d440: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x38d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38d444:
    // 0x38d444: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38d444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38d448:
    // 0x38d448: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x38d448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38d44c:
    // 0x38d44c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x38d44cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_38d450:
    // 0x38d450: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38d450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38d454:
    // 0x38d454: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38d454u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38d458:
    // 0x38d458: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x38d458u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_38d45c:
    // 0x38d45c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_38d460:
    // 0x38d460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x38d460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_38d464:
    // 0x38d464: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x38d464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_38d468:
    // 0x38d468: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x38d468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_38d46c:
    // 0x38d46c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x38d46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_38d470:
    // 0x38d470: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x38d470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_38d474:
    // 0x38d474: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x38d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_38d478:
    // 0x38d478: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38d478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d47c:
    // 0x38d47c: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x38d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_38d480:
    // 0x38d480: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x38d480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_38d484:
    // 0x38d484: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x38d484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_38d488:
    // 0x38d488: 0xc0f809  jalr        $a2
label_38d48c:
    if (ctx->pc == 0x38D48Cu) {
        ctx->pc = 0x38D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D488u;
        // 0x38d48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D490u;
        goto label_38d490;
    }
    ctx->pc = 0x38D488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38D490u);
        ctx->pc = 0x38D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D488u;
        // 0x38d48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D488u, 0x38D490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D490u;
label_38d490:
    // 0x38d490: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d494:
    // 0x38d494: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38d494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38d498:
    // 0x38d498: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38d49c:
    // 0x38d49c: 0x40f809  jalr        $v0
label_38d4a0:
    if (ctx->pc == 0x38D4A0u) {
        ctx->pc = 0x38D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D49Cu;
        // 0x38d4a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4A4u;
        goto label_38d4a4;
    }
    ctx->pc = 0x38D49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D4A4u);
        ctx->pc = 0x38D4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D49Cu;
        // 0x38d4a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D49Cu, 0x38D4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D4A4u;
label_38d4a4:
    // 0x38d4a4: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_38d4a8:
    if (ctx->pc == 0x38D4A8u) {
        ctx->pc = 0x38D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4A4u;
        // 0x38d4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4ACu;
        goto label_38d4ac;
    }
    ctx->pc = 0x38D4A4u;
    {
        const bool branch_taken_0x38d4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d4a4) {
            ctx->pc = 0x38D4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D4A4u;
            // 0x38d4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D500u;
            goto label_38d500;
        }
    }
    ctx->pc = 0x38D4ACu;
label_38d4ac:
    // 0x38d4ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38d4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d4b0:
    // 0x38d4b0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x38d4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_38d4b4:
    // 0x38d4b4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x38d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38d4b8:
    // 0x38d4b8: 0x40f809  jalr        $v0
label_38d4bc:
    if (ctx->pc == 0x38D4BCu) {
        ctx->pc = 0x38D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4B8u;
        // 0x38d4bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4C0u;
        goto label_38d4c0;
    }
    ctx->pc = 0x38D4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D4C0u);
        ctx->pc = 0x38D4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4B8u;
        // 0x38d4bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D4B8u, 0x38D4C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D4C0u;
label_38d4c0:
    // 0x38d4c0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x38d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_38d4c4:
    // 0x38d4c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x38d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_38d4c8:
    // 0x38d4c8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38d4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38d4cc:
    // 0x38d4cc: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x38d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_38d4d0:
    // 0x38d4d0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38d4d4:
    // 0x38d4d4: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x38d4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_38d4d8:
    // 0x38d4d8: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x38d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_38d4dc:
    // 0x38d4dc: 0x40f809  jalr        $v0
label_38d4e0:
    if (ctx->pc == 0x38D4E0u) {
        ctx->pc = 0x38D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4DCu;
        // 0x38d4e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4E4u;
        goto label_38d4e4;
    }
    ctx->pc = 0x38D4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D4E4u);
        ctx->pc = 0x38D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4DCu;
        // 0x38d4e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D4DCu, 0x38D4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D4E4u;
label_38d4e4:
    // 0x38d4e4: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x38d4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_38d4e8:
    // 0x38d4e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d4ec:
    // 0x38d4ec: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x38d4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38d4f0:
    // 0x38d4f0: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x38d4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38d4f4:
    // 0x38d4f4: 0xc0f809  jalr        $a2
label_38d4f8:
    if (ctx->pc == 0x38D4F8u) {
        ctx->pc = 0x38D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4F4u;
        // 0x38d4f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D4FCu;
        goto label_38d4fc;
    }
    ctx->pc = 0x38D4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38D4FCu);
        ctx->pc = 0x38D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D4F4u;
        // 0x38d4f8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D4F4u, 0x38D4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D4FCu;
label_38d4fc:
    // 0x38d4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38d4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d500:
    // 0x38d500: 0xc0e858c  jal         func_3A1630
label_38d504:
    if (ctx->pc == 0x38D504u) {
        ctx->pc = 0x38D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D500u;
        // 0x38d504: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D508u;
        goto label_38d508;
    }
    ctx->pc = 0x38D500u;
    SET_GPR_U32(ctx, 31, 0x38D508u);
    ctx->pc = 0x38D504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D500u;
    // 0x38d504: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x38D500u, 0x38D508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D508u;
label_38d508:
    // 0x38d508: 0xa22012e5  sb          $zero, 0x12E5($s1)
    ctx->pc = 0x38d508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4837), (uint8_t)GPR_U32(ctx, 0));
label_38d50c:
    // 0x38d50c: 0xa22012e4  sb          $zero, 0x12E4($s1)
    ctx->pc = 0x38d50cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4836), (uint8_t)GPR_U32(ctx, 0));
label_38d510:
    // 0x38d510: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x38d510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38d514:
    // 0x38d514: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x38d514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_38d518:
    // 0x38d518: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x38d518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38d51c:
    // 0x38d51c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x38d51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_38d520:
    // 0x38d520: 0x3e00008  jr          $ra
label_38d524:
    if (ctx->pc == 0x38D524u) {
        ctx->pc = 0x38D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D520u;
        // 0x38d524: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D528u;
        goto label_fallthrough_0x38d520;
    }
    ctx->pc = 0x38D520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D520u;
        // 0x38d524: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38d520:
    ctx->pc = 0x38D528u;
}
