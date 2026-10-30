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

// Function: sub_0026D150
// Address: 0x26d150 - 0x26d510
void sub_0026D150_0x26d150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D150_0x26d150");
#endif

    switch (ctx->pc) {
        case 0x26d150u: goto label_26d150;
        case 0x26d154u: goto label_26d154;
        case 0x26d158u: goto label_26d158;
        case 0x26d15cu: goto label_26d15c;
        case 0x26d160u: goto label_26d160;
        case 0x26d164u: goto label_26d164;
        case 0x26d168u: goto label_26d168;
        case 0x26d16cu: goto label_26d16c;
        case 0x26d170u: goto label_26d170;
        case 0x26d174u: goto label_26d174;
        case 0x26d178u: goto label_26d178;
        case 0x26d17cu: goto label_26d17c;
        case 0x26d180u: goto label_26d180;
        case 0x26d184u: goto label_26d184;
        case 0x26d188u: goto label_26d188;
        case 0x26d18cu: goto label_26d18c;
        case 0x26d190u: goto label_26d190;
        case 0x26d194u: goto label_26d194;
        case 0x26d198u: goto label_26d198;
        case 0x26d19cu: goto label_26d19c;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1a8u: goto label_26d1a8;
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1b4u: goto label_26d1b4;
        case 0x26d1b8u: goto label_26d1b8;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1c4u: goto label_26d1c4;
        case 0x26d1c8u: goto label_26d1c8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1d8u: goto label_26d1d8;
        case 0x26d1dcu: goto label_26d1dc;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1e4u: goto label_26d1e4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d1f8u: goto label_26d1f8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d200u: goto label_26d200;
        case 0x26d204u: goto label_26d204;
        case 0x26d208u: goto label_26d208;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d210u: goto label_26d210;
        case 0x26d214u: goto label_26d214;
        case 0x26d218u: goto label_26d218;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d220u: goto label_26d220;
        case 0x26d224u: goto label_26d224;
        case 0x26d228u: goto label_26d228;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d230u: goto label_26d230;
        case 0x26d234u: goto label_26d234;
        case 0x26d238u: goto label_26d238;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d240u: goto label_26d240;
        case 0x26d244u: goto label_26d244;
        case 0x26d248u: goto label_26d248;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d250u: goto label_26d250;
        case 0x26d254u: goto label_26d254;
        case 0x26d258u: goto label_26d258;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d260u: goto label_26d260;
        case 0x26d264u: goto label_26d264;
        case 0x26d268u: goto label_26d268;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d270u: goto label_26d270;
        case 0x26d274u: goto label_26d274;
        case 0x26d278u: goto label_26d278;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d280u: goto label_26d280;
        case 0x26d284u: goto label_26d284;
        case 0x26d288u: goto label_26d288;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d290u: goto label_26d290;
        case 0x26d294u: goto label_26d294;
        case 0x26d298u: goto label_26d298;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2a0u: goto label_26d2a0;
        case 0x26d2a4u: goto label_26d2a4;
        case 0x26d2a8u: goto label_26d2a8;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2b0u: goto label_26d2b0;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2b8u: goto label_26d2b8;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2c0u: goto label_26d2c0;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2c8u: goto label_26d2c8;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d0u: goto label_26d2d0;
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2e0u: goto label_26d2e0;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2e8u: goto label_26d2e8;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2f8u: goto label_26d2f8;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d300u: goto label_26d300;
        case 0x26d304u: goto label_26d304;
        case 0x26d308u: goto label_26d308;
        case 0x26d30cu: goto label_26d30c;
        case 0x26d310u: goto label_26d310;
        case 0x26d314u: goto label_26d314;
        case 0x26d318u: goto label_26d318;
        case 0x26d31cu: goto label_26d31c;
        case 0x26d320u: goto label_26d320;
        case 0x26d324u: goto label_26d324;
        case 0x26d328u: goto label_26d328;
        case 0x26d32cu: goto label_26d32c;
        case 0x26d330u: goto label_26d330;
        case 0x26d334u: goto label_26d334;
        case 0x26d338u: goto label_26d338;
        case 0x26d33cu: goto label_26d33c;
        case 0x26d340u: goto label_26d340;
        case 0x26d344u: goto label_26d344;
        case 0x26d348u: goto label_26d348;
        case 0x26d34cu: goto label_26d34c;
        case 0x26d350u: goto label_26d350;
        case 0x26d354u: goto label_26d354;
        case 0x26d358u: goto label_26d358;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d360u: goto label_26d360;
        case 0x26d364u: goto label_26d364;
        case 0x26d368u: goto label_26d368;
        case 0x26d36cu: goto label_26d36c;
        case 0x26d370u: goto label_26d370;
        case 0x26d374u: goto label_26d374;
        case 0x26d378u: goto label_26d378;
        case 0x26d37cu: goto label_26d37c;
        case 0x26d380u: goto label_26d380;
        case 0x26d384u: goto label_26d384;
        case 0x26d388u: goto label_26d388;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d390u: goto label_26d390;
        case 0x26d394u: goto label_26d394;
        case 0x26d398u: goto label_26d398;
        case 0x26d39cu: goto label_26d39c;
        case 0x26d3a0u: goto label_26d3a0;
        case 0x26d3a4u: goto label_26d3a4;
        case 0x26d3a8u: goto label_26d3a8;
        case 0x26d3acu: goto label_26d3ac;
        case 0x26d3b0u: goto label_26d3b0;
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3b8u: goto label_26d3b8;
        case 0x26d3bcu: goto label_26d3bc;
        case 0x26d3c0u: goto label_26d3c0;
        case 0x26d3c4u: goto label_26d3c4;
        case 0x26d3c8u: goto label_26d3c8;
        case 0x26d3ccu: goto label_26d3cc;
        case 0x26d3d0u: goto label_26d3d0;
        case 0x26d3d4u: goto label_26d3d4;
        case 0x26d3d8u: goto label_26d3d8;
        case 0x26d3dcu: goto label_26d3dc;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d3ecu: goto label_26d3ec;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d3f4u: goto label_26d3f4;
        case 0x26d3f8u: goto label_26d3f8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d400u: goto label_26d400;
        case 0x26d404u: goto label_26d404;
        case 0x26d408u: goto label_26d408;
        case 0x26d40cu: goto label_26d40c;
        case 0x26d410u: goto label_26d410;
        case 0x26d414u: goto label_26d414;
        case 0x26d418u: goto label_26d418;
        case 0x26d41cu: goto label_26d41c;
        case 0x26d420u: goto label_26d420;
        case 0x26d424u: goto label_26d424;
        case 0x26d428u: goto label_26d428;
        case 0x26d42cu: goto label_26d42c;
        case 0x26d430u: goto label_26d430;
        case 0x26d434u: goto label_26d434;
        case 0x26d438u: goto label_26d438;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d440u: goto label_26d440;
        case 0x26d444u: goto label_26d444;
        case 0x26d448u: goto label_26d448;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d450u: goto label_26d450;
        case 0x26d454u: goto label_26d454;
        case 0x26d458u: goto label_26d458;
        case 0x26d45cu: goto label_26d45c;
        case 0x26d460u: goto label_26d460;
        case 0x26d464u: goto label_26d464;
        case 0x26d468u: goto label_26d468;
        case 0x26d46cu: goto label_26d46c;
        case 0x26d470u: goto label_26d470;
        case 0x26d474u: goto label_26d474;
        case 0x26d478u: goto label_26d478;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d480u: goto label_26d480;
        case 0x26d484u: goto label_26d484;
        case 0x26d488u: goto label_26d488;
        case 0x26d48cu: goto label_26d48c;
        case 0x26d490u: goto label_26d490;
        case 0x26d494u: goto label_26d494;
        case 0x26d498u: goto label_26d498;
        case 0x26d49cu: goto label_26d49c;
        case 0x26d4a0u: goto label_26d4a0;
        case 0x26d4a4u: goto label_26d4a4;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4acu: goto label_26d4ac;
        case 0x26d4b0u: goto label_26d4b0;
        case 0x26d4b4u: goto label_26d4b4;
        case 0x26d4b8u: goto label_26d4b8;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d4c0u: goto label_26d4c0;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d4ccu: goto label_26d4cc;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4d8u: goto label_26d4d8;
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4e8u: goto label_26d4e8;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d4f8u: goto label_26d4f8;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d500u: goto label_26d500;
        case 0x26d504u: goto label_26d504;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        default: break;
    }

    ctx->pc = 0x26d150u;

label_26d150:
    // 0x26d150: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26d150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26d154:
    // 0x26d154: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26d158:
    // 0x26d158: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26d158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d15c:
    // 0x26d15c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26d160:
    // 0x26d160: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26d164:
    // 0x26d164: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_26d168:
    // 0x26d168: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26d16c:
    // 0x26d16c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_26d170:
    // 0x26d170: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26d170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_26d174:
    // 0x26d174: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x26d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_26d178:
    // 0x26d178: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x26d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_26d17c:
    // 0x26d17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26d180:
    // 0x26d180: 0xc0e409a  jal         func_390268
label_26d184:
    if (ctx->pc == 0x26D184u) {
        ctx->pc = 0x26D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D180u;
        // 0x26d184: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D188u;
        goto label_26d188;
    }
    ctx->pc = 0x26D180u;
    SET_GPR_U32(ctx, 31, 0x26D188u);
    ctx->pc = 0x26D184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D180u;
    // 0x26d184: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26D180u, 0x26D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D188u;
label_26d188:
    // 0x26d188: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26d188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d18c:
    // 0x26d18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d190:
    // 0x26d190: 0xc08997c  jal         func_2265F0
label_26d194:
    if (ctx->pc == 0x26D194u) {
        ctx->pc = 0x26D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D190u;
        // 0x26d194: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D198u;
        goto label_26d198;
    }
    ctx->pc = 0x26D190u;
    SET_GPR_U32(ctx, 31, 0x26D198u);
    ctx->pc = 0x26D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D190u;
    // 0x26d194: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x26D190u, 0x26D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D198u;
label_26d198:
    // 0x26d198: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_26d19c:
    if (ctx->pc == 0x26D19Cu) {
        ctx->pc = 0x26D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D198u;
        // 0x26d19c: 0x2416005b  addiu       $s6, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1A0u;
        goto label_26d1a0;
    }
    ctx->pc = 0x26D198u;
    {
        const bool branch_taken_0x26d198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D198u;
        // 0x26d19c: 0x2416005b  addiu       $s6, $zero, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d198) {
            ctx->pc = 0x26D1A8u;
            goto label_26d1a8;
        }
    }
    ctx->pc = 0x26D1A0u;
label_26d1a0:
    // 0x26d1a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_26d1a4:
    if (ctx->pc == 0x26D1A4u) {
        ctx->pc = 0x26D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1A0u;
        // 0x26d1a4: 0x241e005a  addiu       $fp, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1A8u;
        goto label_26d1a8;
    }
    ctx->pc = 0x26D1A0u;
    {
        const bool branch_taken_0x26d1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1A0u;
        // 0x26d1a4: 0x241e005a  addiu       $fp, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1a0) {
            ctx->pc = 0x26D1B0u;
            goto label_26d1b0;
        }
    }
    ctx->pc = 0x26D1A8u;
label_26d1a8:
    // 0x26d1a8: 0x2416005d  addiu       $s6, $zero, 0x5D
    ctx->pc = 0x26d1a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_26d1ac:
    // 0x26d1ac: 0x241e005c  addiu       $fp, $zero, 0x5C
    ctx->pc = 0x26d1acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_26d1b0:
    // 0x26d1b0: 0x124000ca  beqz        $s2, . + 4 + (0xCA << 2)
label_26d1b4:
    if (ctx->pc == 0x26D1B4u) {
        ctx->pc = 0x26D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1B0u;
        // 0x26d1b4: 0x3c0500c1  lui         $a1, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1B8u;
        goto label_26d1b8;
    }
    ctx->pc = 0x26D1B0u;
    {
        const bool branch_taken_0x26d1b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1B0u;
        // 0x26d1b4: 0x3c0500c1  lui         $a1, 0xC1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1b0) {
            ctx->pc = 0x26D4DCu;
            goto label_26d4dc;
        }
    }
    ctx->pc = 0x26D1B8u;
label_26d1b8:
    // 0x26d1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d1bc:
    // 0x26d1bc: 0xc089998  jal         func_226660
label_26d1c0:
    if (ctx->pc == 0x26D1C0u) {
        ctx->pc = 0x26D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1BCu;
        // 0x26d1c0: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1C4u;
        goto label_26d1c4;
    }
    ctx->pc = 0x26D1BCu;
    SET_GPR_U32(ctx, 31, 0x26D1C4u);
    ctx->pc = 0x26D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1BCu;
    // 0x26d1c0: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26D1BCu, 0x26D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1C4u;
label_26d1c4:
    // 0x26d1c4: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
label_26d1c8:
    if (ctx->pc == 0x26D1C8u) {
        ctx->pc = 0x26D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1C4u;
        // 0x26d1c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1CCu;
        goto label_26d1cc;
    }
    ctx->pc = 0x26D1C4u;
    {
        const bool branch_taken_0x26d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1C4u;
        // 0x26d1c8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1c4) {
            ctx->pc = 0x26D4E0u;
            goto label_26d4e0;
        }
    }
    ctx->pc = 0x26D1CCu;
label_26d1cc:
    // 0x26d1cc: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x26d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
label_26d1d0:
    // 0x26d1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d1d4:
    // 0x26d1d4: 0xc089998  jal         func_226660
label_26d1d8:
    if (ctx->pc == 0x26D1D8u) {
        ctx->pc = 0x26D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1D4u;
        // 0x26d1d8: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1DCu;
        goto label_26d1dc;
    }
    ctx->pc = 0x26D1D4u;
    SET_GPR_U32(ctx, 31, 0x26D1DCu);
    ctx->pc = 0x26D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1D4u;
    // 0x26d1d8: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26D1D4u, 0x26D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1DCu;
label_26d1dc:
    // 0x26d1dc: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
label_26d1e0:
    if (ctx->pc == 0x26D1E0u) {
        ctx->pc = 0x26D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1DCu;
        // 0x26d1e0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1E4u;
        goto label_26d1e4;
    }
    ctx->pc = 0x26D1DCu;
    {
        const bool branch_taken_0x26d1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1DCu;
        // 0x26d1e0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1dc) {
            ctx->pc = 0x26D4E0u;
            goto label_26d4e0;
        }
    }
    ctx->pc = 0x26D1E4u;
label_26d1e4:
    // 0x26d1e4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x26d1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26d1e8:
    // 0x26d1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d1ec:
    // 0x26d1ec: 0xc08ae58  jal         func_22B960
label_26d1f0:
    if (ctx->pc == 0x26D1F0u) {
        ctx->pc = 0x26D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1ECu;
        // 0x26d1f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1F4u;
        goto label_26d1f4;
    }
    ctx->pc = 0x26D1ECu;
    SET_GPR_U32(ctx, 31, 0x26D1F4u);
    ctx->pc = 0x26D1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1ECu;
    // 0x26d1f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B960u, 0x26D1ECu, 0x26D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1F4u;
label_26d1f4:
    // 0x26d1f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d1f8:
    // 0x26d1f8: 0xc094fb4  jal         func_253ED0
label_26d1fc:
    if (ctx->pc == 0x26D1FCu) {
        ctx->pc = 0x26D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1F8u;
        // 0x26d1fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D200u;
        goto label_26d200;
    }
    ctx->pc = 0x26D1F8u;
    SET_GPR_U32(ctx, 31, 0x26D200u);
    ctx->pc = 0x26D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1F8u;
    // 0x26d1fc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x26D1F8u, 0x26D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D200u;
label_26d200:
    // 0x26d200: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26d200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d204:
    // 0x26d204: 0xc094fb4  jal         func_253ED0
label_26d208:
    if (ctx->pc == 0x26D208u) {
        ctx->pc = 0x26D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D204u;
        // 0x26d208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D20Cu;
        goto label_26d20c;
    }
    ctx->pc = 0x26D204u;
    SET_GPR_U32(ctx, 31, 0x26D20Cu);
    ctx->pc = 0x26D208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D204u;
    // 0x26d208: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x26D204u, 0x26D20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D20Cu;
label_26d20c:
    // 0x26d20c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26d210:
    // 0x26d210: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x26d210u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26d214:
    // 0x26d214: 0x2457e160  addiu       $s7, $v0, -0x1EA0
    ctx->pc = 0x26d214u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26d218:
    // 0x26d218: 0xc041532  jal         func_1054C8
label_26d21c:
    if (ctx->pc == 0x26D21Cu) {
        ctx->pc = 0x26D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D218u;
        // 0x26d21c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D220u;
        goto label_26d220;
    }
    ctx->pc = 0x26D218u;
    SET_GPR_U32(ctx, 31, 0x26D220u);
    ctx->pc = 0x26D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D218u;
    // 0x26d21c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D218u, 0x26D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D220u;
label_26d220:
    // 0x26d220: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26d224:
    // 0x26d224: 0xc041532  jal         func_1054C8
label_26d228:
    if (ctx->pc == 0x26D228u) {
        ctx->pc = 0x26D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D224u;
        // 0x26d228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D22Cu;
        goto label_26d22c;
    }
    ctx->pc = 0x26D224u;
    SET_GPR_U32(ctx, 31, 0x26D22Cu);
    ctx->pc = 0x26D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D224u;
    // 0x26d228: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D224u, 0x26D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D22Cu;
label_26d22c:
    // 0x26d22c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26d22cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d230:
    // 0x26d230: 0xc041532  jal         func_1054C8
label_26d234:
    if (ctx->pc == 0x26D234u) {
        ctx->pc = 0x26D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D230u;
        // 0x26d234: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D238u;
        goto label_26d238;
    }
    ctx->pc = 0x26D230u;
    SET_GPR_U32(ctx, 31, 0x26D238u);
    ctx->pc = 0x26D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D230u;
    // 0x26d234: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D230u, 0x26D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D238u;
label_26d238:
    // 0x26d238: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_26d23c:
    if (ctx->pc == 0x26D23Cu) {
        ctx->pc = 0x26D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D238u;
        // 0x26d23c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D240u;
        goto label_26d240;
    }
    ctx->pc = 0x26D238u;
    {
        const bool branch_taken_0x26d238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D238u;
        // 0x26d23c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d238) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D240u;
label_26d240:
    // 0x26d240: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26d244:
    // 0x26d244: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26d244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26d248:
    // 0x26d248: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26d248u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d24c:
    // 0x26d24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d250:
    // 0x26d250: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26d250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26d254:
    // 0x26d254: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26d254u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d258:
    // 0x26d258: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26d258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26d25c:
    // 0x26d25c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26d25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26d260:
    // 0x26d260: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26d260u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26d264:
    // 0x26d264: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d268:
    // 0x26d268: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26d268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26d26c:
    // 0x26d26c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26d26cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d270:
    // 0x26d270: 0xc041bd4  jal         func_106F50
label_26d274:
    if (ctx->pc == 0x26D274u) {
        ctx->pc = 0x26D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D270u;
        // 0x26d274: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D278u;
        goto label_26d278;
    }
    ctx->pc = 0x26D270u;
    SET_GPR_U32(ctx, 31, 0x26D278u);
    ctx->pc = 0x26D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D270u;
    // 0x26d274: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26D270u, 0x26D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D278u;
label_26d278:
    // 0x26d278: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26d27c:
    // 0x26d27c: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26d27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26d280:
    // 0x26d280: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26d280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26d284:
    // 0x26d284: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26d284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26d288:
    // 0x26d288: 0x60f809  jalr        $v1
label_26d28c:
    if (ctx->pc == 0x26D28Cu) {
        ctx->pc = 0x26D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D288u;
        // 0x26d28c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D290u;
        goto label_26d290;
    }
    ctx->pc = 0x26D288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26D290u);
        ctx->pc = 0x26D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D288u;
        // 0x26d28c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D288u, 0x26D290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D290u;
label_26d290:
    // 0x26d290: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26d290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26d294:
    // 0x26d294: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d298:
    // 0x26d298: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_26d29c:
    if (ctx->pc == 0x26D29Cu) {
        ctx->pc = 0x26D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D298u;
        // 0x26d29c: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2A0u;
        goto label_26d2a0;
    }
    ctx->pc = 0x26D298u;
    {
        const bool branch_taken_0x26d298 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D298u;
        // 0x26d29c: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d298) {
            ctx->pc = 0x26D2DCu;
            goto label_26d2dc;
        }
    }
    ctx->pc = 0x26D2A0u;
label_26d2a0:
    // 0x26d2a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26d2a4:
    // 0x26d2a4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26d2a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26d2a8:
    // 0x26d2a8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d2ac:
    // 0x26d2ac: 0x40f809  jalr        $v0
label_26d2b0:
    if (ctx->pc == 0x26D2B0u) {
        ctx->pc = 0x26D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2ACu;
        // 0x26d2b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2B4u;
        goto label_26d2b4;
    }
    ctx->pc = 0x26D2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26D2B4u);
        ctx->pc = 0x26D2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2ACu;
        // 0x26d2b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D2ACu, 0x26D2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D2B4u;
label_26d2b4:
    // 0x26d2b4: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26d2b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26d2b8:
    // 0x26d2b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d2bc:
    // 0x26d2bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x26d2bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26d2c0:
    // 0x26d2c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26d2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d2c4:
    // 0x26d2c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26d2c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d2c8:
    // 0x26d2c8: 0x254ad110  addiu       $t2, $t2, -0x2EF0
    ctx->pc = 0x26d2c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294955280));
label_26d2cc:
    // 0x26d2cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d2d0:
    // 0x26d2d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26d2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d2d4:
    // 0x26d2d4: 0xc041664  jal         func_105990
label_26d2d8:
    if (ctx->pc == 0x26D2D8u) {
        ctx->pc = 0x26D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2D4u;
        // 0x26d2d8: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2DCu;
        goto label_26d2dc;
    }
    ctx->pc = 0x26D2D4u;
    SET_GPR_U32(ctx, 31, 0x26D2DCu);
    ctx->pc = 0x26D2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2D4u;
    // 0x26d2d8: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26D2D4u, 0x26D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2DCu;
label_26d2dc:
    // 0x26d2dc: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_26d2e0:
    if (ctx->pc == 0x26D2E0u) {
        ctx->pc = 0x26D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2DCu;
        // 0x26d2e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2E4u;
        goto label_26d2e4;
    }
    ctx->pc = 0x26D2DCu;
    {
        const bool branch_taken_0x26d2dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2DCu;
        // 0x26d2e0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d2dc) {
            ctx->pc = 0x26D304u;
            goto label_26d304;
        }
    }
    ctx->pc = 0x26D2E4u;
label_26d2e4:
    // 0x26d2e4: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26d2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26d2e8:
    // 0x26d2e8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26d2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d2ec:
    // 0x26d2ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d2f0:
    // 0x26d2f0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26d2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26d2f4:
    // 0x26d2f4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26d2f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26d2f8:
    // 0x26d2f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26d2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d2fc:
    // 0x26d2fc: 0xc041b20  jal         func_106C80
label_26d300:
    if (ctx->pc == 0x26D300u) {
        ctx->pc = 0x26D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2FCu;
        // 0x26d300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D304u;
        goto label_26d304;
    }
    ctx->pc = 0x26D2FCu;
    SET_GPR_U32(ctx, 31, 0x26D304u);
    ctx->pc = 0x26D300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2FCu;
    // 0x26d300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26D2FCu, 0x26D304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D304u;
label_26d304:
    // 0x26d304: 0xc05d484  jal         func_175210
label_26d308:
    if (ctx->pc == 0x26D308u) {
        ctx->pc = 0x26D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D304u;
        // 0x26d308: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D30Cu;
        goto label_26d30c;
    }
    ctx->pc = 0x26D304u;
    SET_GPR_U32(ctx, 31, 0x26D30Cu);
    ctx->pc = 0x26D308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D304u;
    // 0x26d308: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26D304u, 0x26D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D30Cu;
label_26d30c:
    // 0x26d30c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d310:
    // 0x26d310: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26d310u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26d314:
    // 0x26d314: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26d314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26d318:
    // 0x26d318: 0xa0f809  jalr        $a1
label_26d31c:
    if (ctx->pc == 0x26D31Cu) {
        ctx->pc = 0x26D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D318u;
        // 0x26d31c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D320u;
        goto label_26d320;
    }
    ctx->pc = 0x26D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26D320u);
        ctx->pc = 0x26D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D318u;
        // 0x26d31c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D318u, 0x26D320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D320u;
label_26d320:
    // 0x26d320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d324:
    // 0x26d324: 0xc087016  jal         func_21C058
label_26d328:
    if (ctx->pc == 0x26D328u) {
        ctx->pc = 0x26D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D324u;
        // 0x26d328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D32Cu;
        goto label_26d32c;
    }
    ctx->pc = 0x26D324u;
    SET_GPR_U32(ctx, 31, 0x26D32Cu);
    ctx->pc = 0x26D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D324u;
    // 0x26d328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26D324u, 0x26D32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D32Cu;
label_26d32c:
    // 0x26d32c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26d32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d330:
    // 0x26d330: 0xc05d53a  jal         func_1754E8
label_26d334:
    if (ctx->pc == 0x26D334u) {
        ctx->pc = 0x26D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D330u;
        // 0x26d334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D338u;
        goto label_26d338;
    }
    ctx->pc = 0x26D330u;
    SET_GPR_U32(ctx, 31, 0x26D338u);
    ctx->pc = 0x26D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D330u;
    // 0x26d334: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26D330u, 0x26D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D338u;
label_26d338:
    // 0x26d338: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d33c:
    // 0x26d33c: 0xc05d4f6  jal         func_1753D8
label_26d340:
    if (ctx->pc == 0x26D340u) {
        ctx->pc = 0x26D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D33Cu;
        // 0x26d340: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D344u;
        goto label_26d344;
    }
    ctx->pc = 0x26D33Cu;
    SET_GPR_U32(ctx, 31, 0x26D344u);
    ctx->pc = 0x26D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D33Cu;
    // 0x26d340: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26D33Cu, 0x26D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D344u;
label_26d344:
    // 0x26d344: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x26d344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26d348:
    // 0x26d348: 0xc089990  jal         func_226640
label_26d34c:
    if (ctx->pc == 0x26D34Cu) {
        ctx->pc = 0x26D34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D348u;
        // 0x26d34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D350u;
        goto label_26d350;
    }
    ctx->pc = 0x26D348u;
    SET_GPR_U32(ctx, 31, 0x26D350u);
    ctx->pc = 0x26D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D348u;
    // 0x26d34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26D348u, 0x26D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D350u;
label_26d350:
    // 0x26d350: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26d354:
    // 0x26d354: 0xc041532  jal         func_1054C8
label_26d358:
    if (ctx->pc == 0x26D358u) {
        ctx->pc = 0x26D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D354u;
        // 0x26d358: 0x8e5600d8  lw          $s6, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D35Cu;
        goto label_26d35c;
    }
    ctx->pc = 0x26D354u;
    SET_GPR_U32(ctx, 31, 0x26D35Cu);
    ctx->pc = 0x26D358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D354u;
    // 0x26d358: 0x8e5600d8  lw          $s6, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D354u, 0x26D35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D35Cu;
label_26d35c:
    // 0x26d35c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26d35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26d360:
    // 0x26d360: 0xc041532  jal         func_1054C8
label_26d364:
    if (ctx->pc == 0x26D364u) {
        ctx->pc = 0x26D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D360u;
        // 0x26d364: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D368u;
        goto label_26d368;
    }
    ctx->pc = 0x26D360u;
    SET_GPR_U32(ctx, 31, 0x26D368u);
    ctx->pc = 0x26D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D360u;
    // 0x26d364: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D360u, 0x26D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D368u;
label_26d368:
    // 0x26d368: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26d368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d36c:
    // 0x26d36c: 0xc041532  jal         func_1054C8
label_26d370:
    if (ctx->pc == 0x26D370u) {
        ctx->pc = 0x26D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D36Cu;
        // 0x26d370: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D374u;
        goto label_26d374;
    }
    ctx->pc = 0x26D36Cu;
    SET_GPR_U32(ctx, 31, 0x26D374u);
    ctx->pc = 0x26D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D36Cu;
    // 0x26d370: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D36Cu, 0x26D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D374u;
label_26d374:
    // 0x26d374: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_26d378:
    if (ctx->pc == 0x26D378u) {
        ctx->pc = 0x26D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D374u;
        // 0x26d378: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D37Cu;
        goto label_26d37c;
    }
    ctx->pc = 0x26D374u;
    {
        const bool branch_taken_0x26d374 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D374u;
        // 0x26d378: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d374) {
            ctx->pc = 0x26D3B4u;
            goto label_26d3b4;
        }
    }
    ctx->pc = 0x26D37Cu;
label_26d37c:
    // 0x26d37c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26d380:
    // 0x26d380: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26d380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26d384:
    // 0x26d384: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26d384u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d388:
    // 0x26d388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d38c:
    // 0x26d38c: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26d38cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26d390:
    // 0x26d390: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26d390u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d394:
    // 0x26d394: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26d394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26d398:
    // 0x26d398: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26d398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26d39c:
    // 0x26d39c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26d39cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26d3a0:
    // 0x26d3a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d3a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d3a4:
    // 0x26d3a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26d3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26d3a8:
    // 0x26d3a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26d3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d3ac:
    // 0x26d3ac: 0xc041bd4  jal         func_106F50
label_26d3b0:
    if (ctx->pc == 0x26D3B0u) {
        ctx->pc = 0x26D3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3ACu;
        // 0x26d3b0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3B4u;
        goto label_26d3b4;
    }
    ctx->pc = 0x26D3ACu;
    SET_GPR_U32(ctx, 31, 0x26D3B4u);
    ctx->pc = 0x26D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3ACu;
    // 0x26d3b0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26D3ACu, 0x26D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3B4u;
label_26d3b4:
    // 0x26d3b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x26d3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26d3b8:
    // 0x26d3b8: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26d3bc:
    // 0x26d3bc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26d3bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26d3c0:
    // 0x26d3c0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26d3c4:
    // 0x26d3c4: 0x60f809  jalr        $v1
label_26d3c8:
    if (ctx->pc == 0x26D3C8u) {
        ctx->pc = 0x26D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3C4u;
        // 0x26d3c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3CCu;
        goto label_26d3cc;
    }
    ctx->pc = 0x26D3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26D3CCu);
        ctx->pc = 0x26D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3C4u;
        // 0x26d3c8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D3C4u, 0x26D3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D3CCu;
label_26d3cc:
    // 0x26d3cc: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x26d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26d3d0:
    // 0x26d3d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x26d3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d3d4:
    // 0x26d3d4: 0x12800017  beqz        $s4, . + 4 + (0x17 << 2)
label_26d3d8:
    if (ctx->pc == 0x26D3D8u) {
        ctx->pc = 0x26D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3D4u;
        // 0x26d3d8: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3DCu;
        goto label_26d3dc;
    }
    ctx->pc = 0x26D3D4u;
    {
        const bool branch_taken_0x26d3d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3D4u;
        // 0x26d3d8: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3d4) {
            ctx->pc = 0x26D434u;
            goto label_26d434;
        }
    }
    ctx->pc = 0x26D3DCu;
label_26d3dc:
    // 0x26d3dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26d3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26d3e0:
    // 0x26d3e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26d3e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26d3e4:
    // 0x26d3e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d3e8:
    // 0x26d3e8: 0x40f809  jalr        $v0
label_26d3ec:
    if (ctx->pc == 0x26D3ECu) {
        ctx->pc = 0x26D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3E8u;
        // 0x26d3ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3F0u;
        goto label_26d3f0;
    }
    ctx->pc = 0x26D3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26D3F0u);
        ctx->pc = 0x26D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3E8u;
        // 0x26d3ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D3E8u, 0x26D3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D3F0u;
label_26d3f0:
    // 0x26d3f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26d3f4:
    // 0x26d3f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d3f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d3f8:
    // 0x26d3f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26d3fc:
    // 0x26d3fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d400:
    // 0x26d400: 0x40f809  jalr        $v0
label_26d404:
    if (ctx->pc == 0x26D404u) {
        ctx->pc = 0x26D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D400u;
        // 0x26d404: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D408u;
        goto label_26d408;
    }
    ctx->pc = 0x26D400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26D408u);
        ctx->pc = 0x26D404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D400u;
        // 0x26d404: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D400u, 0x26D408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D408u;
label_26d408:
    // 0x26d408: 0x3c0b0027  lui         $t3, 0x27
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)39 << 16));
label_26d40c:
    // 0x26d40c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d410:
    // 0x26d410: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26d410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d414:
    // 0x26d414: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x26d414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26d418:
    // 0x26d418: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x26d418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d41c:
    // 0x26d41c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26d41cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d420:
    // 0x26d420: 0x256bd078  addiu       $t3, $t3, -0x2F88
    ctx->pc = 0x26d420u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294955128));
label_26d424:
    // 0x26d424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d428:
    // 0x26d428: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26d428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26d42c:
    // 0x26d42c: 0xc04229e  jal         func_108A78
label_26d430:
    if (ctx->pc == 0x26D430u) {
        ctx->pc = 0x26D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D42Cu;
        // 0x26d430: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D434u;
        goto label_26d434;
    }
    ctx->pc = 0x26D42Cu;
    SET_GPR_U32(ctx, 31, 0x26D434u);
    ctx->pc = 0x26D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D42Cu;
    // 0x26d430: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26D42Cu, 0x26D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D434u;
label_26d434:
    // 0x26d434: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26d438:
    if (ctx->pc == 0x26D438u) {
        ctx->pc = 0x26D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D434u;
        // 0x26d438: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D43Cu;
        goto label_26d43c;
    }
    ctx->pc = 0x26D434u;
    {
        const bool branch_taken_0x26d434 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D434u;
        // 0x26d438: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d434) {
            ctx->pc = 0x26D45Cu;
            goto label_26d45c;
        }
    }
    ctx->pc = 0x26D43Cu;
label_26d43c:
    // 0x26d43c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26d43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26d440:
    // 0x26d440: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26d440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d444:
    // 0x26d444: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d448:
    // 0x26d448: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26d448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26d44c:
    // 0x26d44c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26d44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26d450:
    // 0x26d450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26d450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d454:
    // 0x26d454: 0xc041b20  jal         func_106C80
label_26d458:
    if (ctx->pc == 0x26D458u) {
        ctx->pc = 0x26D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D454u;
        // 0x26d458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D45Cu;
        goto label_26d45c;
    }
    ctx->pc = 0x26D454u;
    SET_GPR_U32(ctx, 31, 0x26D45Cu);
    ctx->pc = 0x26D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D454u;
    // 0x26d458: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26D454u, 0x26D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D45Cu;
label_26d45c:
    // 0x26d45c: 0xc05d484  jal         func_175210
label_26d460:
    if (ctx->pc == 0x26D460u) {
        ctx->pc = 0x26D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D45Cu;
        // 0x26d460: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D464u;
        goto label_26d464;
    }
    ctx->pc = 0x26D45Cu;
    SET_GPR_U32(ctx, 31, 0x26D464u);
    ctx->pc = 0x26D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D45Cu;
    // 0x26d460: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26D45Cu, 0x26D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D464u;
label_26d464:
    // 0x26d464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26d464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d468:
    // 0x26d468: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26d468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26d46c:
    // 0x26d46c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26d470:
    // 0x26d470: 0xa0f809  jalr        $a1
label_26d474:
    if (ctx->pc == 0x26D474u) {
        ctx->pc = 0x26D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D470u;
        // 0x26d474: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D478u;
        goto label_26d478;
    }
    ctx->pc = 0x26D470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26D478u);
        ctx->pc = 0x26D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D470u;
        // 0x26d474: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D470u, 0x26D478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D478u;
label_26d478:
    // 0x26d478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d47c:
    // 0x26d47c: 0xc087016  jal         func_21C058
label_26d480:
    if (ctx->pc == 0x26D480u) {
        ctx->pc = 0x26D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D47Cu;
        // 0x26d480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D484u;
        goto label_26d484;
    }
    ctx->pc = 0x26D47Cu;
    SET_GPR_U32(ctx, 31, 0x26D484u);
    ctx->pc = 0x26D480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D47Cu;
    // 0x26d480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26D47Cu, 0x26D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D484u;
label_26d484:
    // 0x26d484: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26d484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d488:
    // 0x26d488: 0xc05d53a  jal         func_1754E8
label_26d48c:
    if (ctx->pc == 0x26D48Cu) {
        ctx->pc = 0x26D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D488u;
        // 0x26d48c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D490u;
        goto label_26d490;
    }
    ctx->pc = 0x26D488u;
    SET_GPR_U32(ctx, 31, 0x26D490u);
    ctx->pc = 0x26D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D488u;
    // 0x26d48c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26D488u, 0x26D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D490u;
label_26d490:
    // 0x26d490: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26d490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26d494:
    // 0x26d494: 0xc05d4f6  jal         func_1753D8
label_26d498:
    if (ctx->pc == 0x26D498u) {
        ctx->pc = 0x26D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D494u;
        // 0x26d498: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D49Cu;
        goto label_26d49c;
    }
    ctx->pc = 0x26D494u;
    SET_GPR_U32(ctx, 31, 0x26D49Cu);
    ctx->pc = 0x26D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D494u;
    // 0x26d498: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26D494u, 0x26D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D49Cu;
label_26d49c:
    // 0x26d49c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x26d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26d4a0:
    // 0x26d4a0: 0xc089990  jal         func_226640
label_26d4a4:
    if (ctx->pc == 0x26D4A4u) {
        ctx->pc = 0x26D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4A0u;
        // 0x26d4a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4A8u;
        goto label_26d4a8;
    }
    ctx->pc = 0x26D4A0u;
    SET_GPR_U32(ctx, 31, 0x26D4A8u);
    ctx->pc = 0x26D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4A0u;
    // 0x26d4a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26D4A0u, 0x26D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4A8u;
label_26d4a8:
    // 0x26d4a8: 0xc094fca  jal         func_253F28
label_26d4ac:
    if (ctx->pc == 0x26D4ACu) {
        ctx->pc = 0x26D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4A8u;
        // 0x26d4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4B0u;
        goto label_26d4b0;
    }
    ctx->pc = 0x26D4A8u;
    SET_GPR_U32(ctx, 31, 0x26D4B0u);
    ctx->pc = 0x26D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4A8u;
    // 0x26d4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x26D4A8u, 0x26D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4B0u;
label_26d4b0:
    // 0x26d4b0: 0xc094fca  jal         func_253F28
label_26d4b4:
    if (ctx->pc == 0x26D4B4u) {
        ctx->pc = 0x26D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4B0u;
        // 0x26d4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4B8u;
        goto label_26d4b8;
    }
    ctx->pc = 0x26D4B0u;
    SET_GPR_U32(ctx, 31, 0x26D4B8u);
    ctx->pc = 0x26D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4B0u;
    // 0x26d4b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x26D4B0u, 0x26D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4B8u;
label_26d4b8:
    // 0x26d4b8: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x26d4b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_26d4bc:
    // 0x26d4bc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26d4bcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_26d4c0:
    // 0x26d4c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26d4c4:
    if (ctx->pc == 0x26D4C4u) {
        ctx->pc = 0x26D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4C0u;
        // 0x26d4c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4C8u;
        goto label_26d4c8;
    }
    ctx->pc = 0x26D4C0u;
    {
        const bool branch_taken_0x26d4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4C0u;
        // 0x26d4c4: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4c0) {
            ctx->pc = 0x26D4DCu;
            goto label_26d4dc;
        }
    }
    ctx->pc = 0x26D4C8u;
label_26d4c8:
    // 0x26d4c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26d4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d4cc:
    // 0x26d4cc: 0x2484e490  addiu       $a0, $a0, -0x1B70
    ctx->pc = 0x26d4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
label_26d4d0:
    // 0x26d4d0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x26d4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d4d4:
    // 0x26d4d4: 0xc13b632  jal         func_4ED8C8
label_26d4d8:
    if (ctx->pc == 0x26D4D8u) {
        ctx->pc = 0x26D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4D4u;
        // 0x26d4d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4DCu;
        goto label_26d4dc;
    }
    ctx->pc = 0x26D4D4u;
    SET_GPR_U32(ctx, 31, 0x26D4DCu);
    ctx->pc = 0x26D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4D4u;
    // 0x26d4d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED8C8u, 0x26D4D4u, 0x26D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4DCu;
label_26d4dc:
    // 0x26d4dc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26d4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26d4e0:
    // 0x26d4e0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26d4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26d4e4:
    // 0x26d4e4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26d4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26d4e8:
    // 0x26d4e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26d4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26d4ec:
    // 0x26d4ec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26d4ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26d4f0:
    // 0x26d4f0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26d4f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26d4f4:
    // 0x26d4f4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26d4f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26d4f8:
    // 0x26d4f8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x26d4f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d4fc:
    // 0x26d4fc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x26d4fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26d500:
    // 0x26d500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26d504:
    // 0x26d504: 0x3e00008  jr          $ra
label_26d508:
    if (ctx->pc == 0x26D508u) {
        ctx->pc = 0x26D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D504u;
        // 0x26d508: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D50Cu;
        goto label_26d50c;
    }
    ctx->pc = 0x26D504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D504u;
        // 0x26d508: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D50Cu;
label_26d50c:
    // 0x26d50c: 0x0  nop
    ctx->pc = 0x26d50cu;
    // NOP
    ctx->pc = 0x26d510u;
}
